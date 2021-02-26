#pragma once
#include"Sprite.h"
#include"Entity.h"
#include"SpriteController.h"
#include"Map.h"
#include<d2d1.h>

class Renderer
{
public:
	Renderer();
	~Renderer();

	bool Creation(HWND);

	void StartScene();
	bool EndScene();
private:
	HWND hwnd;
	ID2D1Factory* pFactory = 0;
	ID2D1HwndRenderTarget* pRenderTarget = 0;

	SpriteController* pSpriteHandler = 0;

	TileMap* _pTestMap = 0;
	TileMap* _pTestMap2 = 0;
	TileMap* _pTestMap3 = 0;

	float fTimeAcumulated = 0.0f;
	D2D1_POINT_2F Point1;
	D2D1_POINT_2F Point2;
	ID2D1SolidColorBrush* pBrush1;
	ID2D1SolidColorBrush* pBrush2;
	Enity* _pTestEnity = 0;
	Enity* _pTestEnity2 = 0;
	IWICImagingFactory* pIWCFactory = NULL;
};