#pragma once
#include<d2d1.h>
#include"Entity.h"

class Camera
{
public:
	static Camera* GetCamera();
	static void DestroyCamera();

	void SetScaleing(D2D1_POINT_2L targetResoloution); //so everything looks the same reguardless of the users screen resoloution
	void SetSize(D2D1_POINT_2L currentResoloution);

	void SetPosition(D2D1_POINT_2F newPosition);
	void SetAlingment(D2D1_POINT_2F newAlign, bool bAlignX, bool bAlignY);

	void MoveToPosition(D2D1_POINT_2F newPosition, float fMove);

	D2D1_RECT_L GetSight();
	D2D1_POINT_2F GetScale();

	void AttachToEnity(Enity* p_Enity);
	void Decoupple();
	void SetBounds(D2D1_RECT_F HardBounds);
	void SetBounds(D2D1_POINT_2F percentBounds);

	void Update();
private:
	Camera();
	~Camera();

	static Camera* p_Camera;

	D2D1_POINT_2L screenSize;
	D2D1_POINT_2F screenScale;

	D2D1_RECT_F Bounds;

	D2D1_POINT_2F position;
	D2D1_POINT_2F alignTo;

	D2D1_POINT_2F movetoPosition;
	D2D1_POINT_2F originalPosition;
	float fMoveTime;
	float fElapsed;
	bool bMoving;

	Enity* p_attachedTo;
};