#pragma once
#include<wincodec.h>
#include<d2d1.h>

class TileMap
{
public:
	TileMap();
	~TileMap();

	void SetScale(D2D1_POINT_2F NewScale);
	bool LoadTiles(LPCWSTR p_cFileName);
	bool SetSize(int iNewSize);
	bool LoadMapData(LPCWSTR p_cFileName);

	bool CheckIfReady();
	void DrawMap();

	static void SetLoaders(IWICImagingFactory* pNewFactory, ID2D1RenderTarget* pNewRenderTarget);
private:
	ID2D1Bitmap* pBitmap;

	short* p_cMapData = 0;

	int iTileSize = 0;
	int iMaxTiles = 0;
	D2D1_SIZE_F iMapSize;
	char cMapAtributes;

	D2D1_POINT_2F MoveScale;

	float fHorizontalScroll = 0.0f;
	float fVerticalScroll = 0.0f;

	float fFade = 0.0f;

	float fAcumlatedDelta = 0.0f;

	bool bLoaded = false;

	static IWICImagingFactory* pFactory;
	static ID2D1RenderTarget* pRenderTarget;
};