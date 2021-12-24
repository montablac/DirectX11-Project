#pragma once
#include<d2d1.h>
#include<wincodec.h>

class Sprite
{
public:
	Sprite();
	~Sprite();

	bool LoadSprite(LPCWSTR p_cFileName);
	bool Release();

	void Draw();
	void SetScreenLoc(D2D1_RECT_F* pLocation);
	void SetDrawPortion(D2D1_RECT_F* pLocation);

	void GetSpriteSize(D2D1_SIZE_F* pReturn);

	static void SetLoaders(IWICImagingFactory* pNewFactory, ID2D1RenderTarget* pNewRenderTarget);
private:
	ID2D1Bitmap* pBitmap;

	D2D1_RECT_F Location;
	D2D1_RECT_F DrawPortion;

	static IWICImagingFactory* pFactory;
	static ID2D1RenderTarget* pRenderTarget;
};