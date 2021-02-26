#include "Sprite.h"
#include "Camera.h"

IWICImagingFactory* Sprite::pFactory = 0;
ID2D1RenderTarget* Sprite::pRenderTarget = 0;

Sprite::Sprite()
{
}

Sprite::~Sprite()
{
	Release();
}

bool Sprite::LoadSprite(LPCWSTR p_cFileName)
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

bool Sprite::Release()
{
	bool bReturn = false;

	if (pBitmap != 0)
	{
		pBitmap->Release();
		pBitmap = 0;
		bReturn = true;
	}
	

	return bReturn;
}

void Sprite::Draw()
{
	pRenderTarget->DrawBitmap(pBitmap, Location, 1.0f, D2D1_BITMAP_INTERPOLATION_MODE_LINEAR, DrawPortion);
}

void Sprite::SetScreenLoc(D2D1_RECT_F * pLocation)
{
	if (pLocation != 0)
	{
		Location.bottom = pLocation->bottom;
		Location.top = pLocation->top;
		Location.left = pLocation->left;
		Location.right = pLocation->right;
	}
}

void Sprite::SetDrawPortion(D2D1_RECT_F * pLocation)
{
	if (pLocation != 0)
	{
		DrawPortion.bottom = pLocation->bottom;
		DrawPortion.top = pLocation->top;
		DrawPortion.left = pLocation->left;
		DrawPortion.right = pLocation->right;
	}
}

void Sprite::GetSpriteSize(D2D1_SIZE_F * pReturn)
{
	D2D1_SIZE_F Return;

	Return.height = 0.0f;
	Return.width = 0.0f;

	if (pBitmap != 0 && pReturn != 0)
	{
		Return = pBitmap->GetSize();

		pReturn->height = Return.height;
		pReturn->width = Return.width;
	}
}

void Sprite::SetLoaders(IWICImagingFactory * pNewFactory, ID2D1RenderTarget * pNewRenderTarget)
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
