#pragma once
#include "Entity.h"
#include "Map.h"
#include<vector>
#include<d2d1.h>

class Layer
{
public:
	Layer();
	~Layer();

	bool LoadLayer(LPCWSTR cFileName);
	bool SetScale(D2D1_POINT_2F NewScale, bool bScaleX, bool bScaleY);

	void Draw();

	void ClearEnitys();
private:
	D2D1_POINT_2F LayerMoveScale = {1.0f, 1.0f};

	TileMap tileMap;

	vector<Enity*> vEnityList;
	int iTotalEnitys = 0;
};