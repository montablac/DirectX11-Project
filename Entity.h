#pragma once
#include<d2d1.h>
#include"SpriteController.h"
#include"Controller.h"

enum EnityTypes
{
	ENITY_GENERIC,
	ENITY_PLAYER,
	ENITY_ENEMY,
	ENITY_PROJECTILE,

	ENITY_OTHER
};

class Enity
{
public:
	Enity(LPCWSTR cSpriteName, bool bIsAnimated = false, int iFrames = 1, int iFreamerate = 90, D2D1_POINT_2F startPoint = { 0.0f, 0.0f });
	~Enity();

	void Update();
	bool Draw();

	bool IsOnscreen(D2D1_RECT_F screen);
	bool IsColiding(D2D1_POINT_2F point);
	bool IsColiding(Enity OtherTarget);

	void AttachController(Controller* p_NewController, EnityTypes ControlerType);

	void SetLayerScale(D2D1_POINT_2F scale);
	void GetPosition(D2D1_POINT_2F* _return = 0);
	void SetPosition(D2D1_POINT_2F point);

	void SetSpriteOffset(float fXOffset, float fYOffset);

	void InterpolatePosition(D2D1_POINT_2F point, float fTime = 1.0f);
protected:
	int iSprite = -1;
	D2D1_RECT_F spriteSize;

	D2D1_POINT_2F position;
	D2D1_POINT_2F offset;
	D2D1_RECT_F enityHitBox;

	Controller* p_Controller = 0;
	EnityTypes EnityType = ENITY_OTHER;

	D2D1_POINT_2F ScreenMoveScale = { 1.0f,1.0f };
	
	float fMoveSpeed = 100.0f;

	bool bInterpolating = false;
	D2D1_POINT_2F interpolationTarget;
	D2D1_POINT_2F interpolationStart;
	float fInterpolationTime;
	float fDeltaTotal;
};