#include "Map.h"
#include "Camera.h"
#include "Clock.h"
#include "MapAtributes.h"
#include<fstream>

TileMap::TileMap()
{
	p_cMapData = 0;
	pBitmap = 0;
}

TileMap::~TileMap()
{
	if (p_cMapData != 0)
	{
		delete p_cMapData;
		p_cMapData = 0;
	}
	if (pBitmap != 0)
	{
		pBitmap->Release();
		pBitmap = 0;
	}
}

bool TileMap::LoadTiles(LPCWSTR p_cFileName)
{
	bool bReturn = false;
	HRESULT hr;

	IWICBitmapDecoder* pDecoder = NULL;
	IWICBitmapFrameDecode* pFrame = NULL;
	IWICFormatConverter* pConverter = NULL;
	if (pFactory != 0 && pRenderTarget != 0)
	{
		hr = pFactory->CreateDecoderFromFilename(p_cFileName, NULL, GENERIC_READ, WICDecodeMetadataCacheOnDemand, &pDecoder);

		if (SUCCEEDED(hr))
		{
			hr = pDecoder->GetFrame(0, &pFrame);

			if (SUCCEEDED(hr))
			{
				hr = pFactory->CreateFormatConverter(&pConverter);

				if (SUCCEEDED(hr))
				{
					hr = pConverter->Initialize(pFrame, GUID_WICPixelFormat32bppPRGBA, WICBitmapDitherTypeNone, NULL, 0.0f, WICBitmapPaletteTypeMedianCut);

					if (SUCCEEDED(hr))
					{
						hr = pRenderTarget->CreateBitmapFromWicBitmap(pConverter, &pBitmap);

						if (SUCCEEDED(hr))
						{
							bReturn = true;
						}
					}

					pConverter->Release();
				}

				pDecoder->Release();
				pFrame->Release();
			}
		}
	}

	return bReturn;
}

bool TileMap::SetSize(int iNewSize)
{
	bool bReturn = false;
	if (pBitmap != 0)
	{
		D2D1_SIZE_F SpriteSize = pBitmap->GetSize();

		if (iNewSize <= SpriteSize.height && iNewSize <= SpriteSize.width)
		{
			iTileSize = iNewSize;
			iMaxTiles = (SpriteSize.height / iNewSize) * (SpriteSize.width / iNewSize);
			bReturn = true;
		}
	}

	return bReturn;
}

bool TileMap::LoadMapData(LPCWSTR p_cFileName)
{
	bool bReturn = false;
	fstream File;

	File.open(p_cFileName, std::fstream::in | std::fstream::binary);

	if (File.is_open())
	{
		File.seekg(0, File.end);

		int iFileLength = File.tellg();

		int icurrentpos;

		File.seekg(0, File.beg);

		void* p_Data = 0;
		char cFileLength;
		
		short sTileSize;
		short sWidth;
		short sHeight;

		File.read(&cFileLength, sizeof(char));

		icurrentpos = File.tellg();

		if (iFileLength > icurrentpos)
		{
			p_Data = new wchar_t[cFileLength];

			File.read(static_cast<char*>(p_Data), sizeof(wchar_t) * cFileLength);

			bool bWorked = LoadTiles(static_cast<LPCWSTR>(p_Data));

			delete p_Data;

			if (bWorked)
			{
				File.read(&cMapAtributes, sizeof(char));

				if (cMapAtributes & MAP_AUTO_SCROLL_HORIZONTAL)
				{
					p_Data = &fHorizontalScroll;
					File.read(static_cast<char*>(p_Data), sizeof(float));
				}

				if (cMapAtributes & MAP_AUTO_SCROLL_VERTICAL)
				{
					p_Data = &fVerticalScroll;
					File.read(static_cast<char*>(p_Data), sizeof(float));
				}

				if (cMapAtributes & MAP_FADE)
				{
					p_Data = &fFade;
					File.read(static_cast<char*>(p_Data), sizeof(float));
				}

				p_Data = new short;

				File.read(static_cast<char*>(p_Data), sizeof(short));

				short sSize = *(static_cast<short*>(p_Data));

				bWorked = SetSize(sSize);

				if (bWorked)
				{
					short sWidth;
					short sHeight;

					File.read(static_cast<char*>(p_Data), sizeof(short));

					sWidth = *(static_cast<short*>(p_Data));

					File.read(static_cast<char*>(p_Data), sizeof(short));

					sHeight = *(static_cast<short*>(p_Data));

					iMapSize.height = sHeight;
					iMapSize.width = sWidth;

					sSize = sWidth * sHeight;

					delete p_Data;

					p_Data = new short[sSize];

					File.read(static_cast<char*>(p_Data), sizeof(short) * sSize);

					p_cMapData = static_cast<short*>(p_Data);

					bReturn = true;
				}
				else
				{
					delete p_Data;
					//failed to set tile size
				}
			}
			else
			{
				//failed to load tilemap
			}
		}

		File.close();
	}

	return bReturn;
}

bool TileMap::CheckIfReady()
{
	bool bReturn = false;

	if (p_cMapData != 0 && pBitmap != 0 && iTileSize != 0)
	{
		bReturn = true;
	}

	return bReturn;
}

void TileMap::SetScale(D2D1_POINT_2F NewScale)
{
	MoveScale = NewScale;
}

void TileMap::DrawMap()
{
	D2D1_RECT_F Sprite;
	D2D1_RECT_F Tile;
	D2D1_SIZE_F SpriteSize;
	short sTileData;

	if (CheckIfReady())
	{
		SpriteSize = pBitmap->GetSize();

		short sTileMapStride = SpriteSize.width / iTileSize;

		D2D1_RECT_L Screen = Camera::GetCamera()->GetSight();
		D2D1_POINT_2F fScale = Camera::GetCamera()->GetScale();

		int iMapWidth = iMapSize.width;

		D2D1_POINT_2L lOffset;
		D2D1_POINT_2L lWrapTimes;
		D2D1_POINT_2L lMovement;

		D2D1_POINT_2L ScreenDimentions;

		ScreenDimentions.x = Screen.right - Screen.left;
		ScreenDimentions.y = Screen.bottom - Screen.top;

		Screen.top *= MoveScale.y;
		Screen.left *= MoveScale.x;
		Screen.right = Screen.left + ScreenDimentions.x;
		Screen.bottom = Screen.top + ScreenDimentions.y;

		fAcumlatedDelta += Clock::GetClock()->GetDelta();

		lWrapTimes.x = 0;
		lWrapTimes.y = 0;

		lOffset.x = 0;
		lOffset.y = 0;

		lMovement.x = 0;
		lMovement.y = 0;

		if (cMapAtributes & MAP_WRAP_HORIZONTAL)
		{
			lWrapTimes.x = (((iMapSize.width * iTileSize) * fScale.x) / (Screen.right - Screen.left)) + 2;
			lOffset.x = (Screen.left / (iMapSize.width * iTileSize)) - (iMapSize.width * iTileSize);
		}

		if (cMapAtributes & MAP_WRAP_VERTICAL)
		{
			lWrapTimes.y = (((iMapSize.height * iTileSize) * fScale.y) / (Screen.bottom - Screen.top)) + 2;
			lOffset.y = (Screen.top / (iMapSize.height * iTileSize)) - (iMapSize.height * iTileSize);
		}

		if (cMapAtributes & MAP_AUTO_SCROLL_HORIZONTAL)
		{
			lMovement.x = (fAcumlatedDelta * iTileSize) / fHorizontalScroll;
			while (lMovement.x >= (iMapSize.width * iTileSize) + Screen.left)
			{
				lMovement.x -= iMapSize.width * iTileSize;
			}
		}

		if (cMapAtributes & MAP_AUTO_SCROLL_VERTICAL)
		{
			lMovement.y = (fAcumlatedDelta * iTileSize) / fVerticalScroll;
			while (lMovement.y >= (iMapSize.height * iTileSize) + Screen.top)
			{
				lMovement.y -= iMapSize.height * iTileSize;
			}
		}

		for (int xWrap = 0; xWrap <= lWrapTimes.x; xWrap++)
		{
			for (int yWrap = 0; yWrap <= lWrapTimes.y; yWrap++)
			{
				for (int x = 0; x < iMapSize.width; x++)
				{
					for (int y = 0; y < iMapSize.height; y++)
					{
						sTileData = p_cMapData[(y * iMapWidth) + x];

						if (sTileData < iMaxTiles)
						{
							bool bOnScreen = false;

							Tile.left = ((x * iTileSize) + (xWrap * (iMapSize.width * iTileSize)) + lOffset.x + lMovement.x) * fScale.x;
							Tile.right = ((x * iTileSize) + (xWrap * (iMapSize.width * iTileSize)) + lOffset.x + lMovement.x + iTileSize) * fScale.x;
							Tile.top = ((y * iTileSize) + (yWrap * (iMapSize.height * iTileSize)) + lOffset.y + lMovement.y) * fScale.y;
							Tile.bottom = ((y * iTileSize) + (yWrap * (iMapSize.height * iTileSize)) + lOffset.y + lMovement.y +  iTileSize) * fScale.y;

							if ((Tile.bottom > Screen.top && Tile.top < Screen.bottom) && (Tile.right > Screen.left && Tile.left < Screen.right))
							{
								bOnScreen = true;
							}

							if(bOnScreen)
							{
								Sprite.top = (sTileData / sTileMapStride) * iTileSize;
								Sprite.bottom = ((sTileData / sTileMapStride) * iTileSize) + iTileSize;
								Sprite.left = (sTileData % sTileMapStride) * iTileSize;
								Sprite.right = ((sTileData % sTileMapStride) * iTileSize) + iTileSize;

								Tile.left = Tile.left - Screen.left;
								Tile.right = Tile.right - Screen.left;
								Tile.top = Tile.top - Screen.top;
								Tile.bottom = Tile.bottom - Screen.top;

								float fAlpha = 1.0f;

								if (cMapAtributes & MAP_FADE)
								{
									fAlpha = (cosf(fAcumlatedDelta / (fFade / 2.0f)) / 2.0f) + 0.5f;
								}

								pRenderTarget->DrawBitmap(pBitmap, &Tile, fAlpha, D2D1_BITMAP_INTERPOLATION_MODE_LINEAR, &Sprite);
							}
						}
					}
				}
			}
		}
	}
}

void TileMap::SetLoaders(IWICImagingFactory* pNewFactory, ID2D1RenderTarget* pNewRenderTarget)
{
	if (pNewFactory != NULL)
	{
		pFactory = pNewFactory;
	}
	if (pNewRenderTarget != NULL)
	{
		pRenderTarget = pNewRenderTarget;
	}
}

IWICImagingFactory* TileMap::pFactory = 0;
ID2D1RenderTarget* TileMap::pRenderTarget = 0;