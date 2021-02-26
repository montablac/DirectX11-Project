#pragma once
#include<d2d1.h>
#include<vector>
#include"Sprite.h"

using namespace std;

struct AnimatedInfo
{
	LPCWSTR p_cFileName;
	bool bAnimated;
	float fDelta;

	int iFrames;
	int iFrameRate;

	int iCurrentFrame;

	int iRefrences;

	Sprite* p_Sprite = 0;
};

class SpriteController
{
public:
	static SpriteController* GetSprites();
	bool DestroySprites();

	int AddStaticSprite(LPCWSTR p_cFileName);
	int AddAnimatedSprite(LPCWSTR p_cFileName, int iFrames, int iFrameRate, bool bCreateNew = false);

	bool DrawSprite(int iSpriteID);
	bool RemoveSprite(int iSpriteID);

	bool ResetAnimation(int iSpriteID);

	bool SetLocation(int iSpriteID, int iX, int iY, float fRightAlign = 0.0f, float fBottomAlign = 0.0f);

	D2D1_RECT_F GetSpriteSize(int iSpriteID);

	bool UpdateAll();
	void ClearAll();
private:
	SpriteController();
	~SpriteController();

	vector<bool> vbInUse;
	vector<AnimatedInfo*> vAnimInfo;

	int iTotalSprites = 0;

	static SpriteController* SpriteHolder;
};