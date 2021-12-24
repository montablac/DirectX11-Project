#include"Camera.h"
#include"clock.h"

Camera* Camera::p_Camera = 0;

Camera* Camera::GetCamera()
{
	if (p_Camera == 0)
	{
		p_Camera = new Camera;

		if (p_Camera == 0)
		{
			//bad shit yo
		}
	}

	return p_Camera;
}

void Camera::DestroyCamera()
{
	if (p_Camera != 0)
	{
		delete p_Camera;

		p_Camera = 0;
	}
}

void Camera::SetScaleing(D2D1_POINT_2L targetResoloution) //so everything looks the same reguardless of the users screen resoloution
{
	screenScale.x = float(screenSize.x) / float(targetResoloution.x);
	screenScale.y = float(screenSize.y) / float(targetResoloution.y);
}

void Camera::SetBounds(D2D1_RECT_F HardBounds)
{
	if (HardBounds.top < 0.0f)
	{
		HardBounds.top = 0.0f;
	}
	if (HardBounds.bottom > screenSize.y)
	{
		HardBounds.bottom = screenSize.y;
	}
	if (HardBounds.top > HardBounds.bottom)
	{
		HardBounds.top = HardBounds.bottom;
	}

	if (HardBounds.left < 0.0f)
	{
		HardBounds.left = 0.0f;
	}
	if (HardBounds.right > screenSize.y)
	{
		HardBounds.right = screenSize.y;
	}
	if (HardBounds.left > HardBounds.right)
	{
		HardBounds.left = HardBounds.right;
	}

	Bounds = HardBounds;
}

void Camera::SetBounds(D2D1_POINT_2F percentBounds)
{
	if (percentBounds.x > 1.0f)
	{
		percentBounds.x = 1.0f;
	}
	else if (percentBounds.x < 0.0f)
	{
		percentBounds.x = 0.0f;
	}
	if (percentBounds.y > 1.0f)
	{
		percentBounds.y = 1.0f;
	}
	else if (percentBounds.y < 0.0f)
	{
		percentBounds.y = 0.0f;
	}

	Bounds.top = (screenSize.x / 2.0f) - ((screenSize.x / 2.0f) * percentBounds.x);
	Bounds.bottom = (screenSize.x / 2.0f) + ((screenSize.x / 2.0f) * percentBounds.x);

	Bounds.left = (screenSize.y / 2.0f) - ((screenSize.y / 2.0f) * percentBounds.y);
	Bounds.right = (screenSize.y / 2.0f) + ((screenSize.y / 2.0f) * percentBounds.y);
}

void Camera::SetSize(D2D1_POINT_2L currentResoloution)
{
	screenSize = currentResoloution;

	Bounds.top = 0;
	Bounds.bottom = screenSize.y;
	Bounds.left = 0;
	Bounds.right = screenSize.x;
}

D2D1_POINT_2F Camera::GetScale()
{
	return screenScale;
}

void Camera::SetPosition(D2D1_POINT_2F newPosition)
{
	position = newPosition;
}

void Camera::SetAlingment(D2D1_POINT_2F newAlign, bool bAlignX, bool bAlignY)
{
	if (newAlign.x > 1.0f)
	{
		newAlign.x = 1.0f;
	}
	else if (newAlign.x < -1.0f)
	{
		newAlign.x = -1.0f;
	}

	if (newAlign.y > 1.0f)
	{
		newAlign.y = 1.0f;
	}
	else if (newAlign.y < -1.0f)
	{
		newAlign.y = -1.0f;
	}

	if (bAlignX)
	{
		alignTo.x = newAlign.x;
	}
	if (bAlignY)
	{
		alignTo.y = newAlign.y;
	}
}

void Camera::MoveToPosition(D2D1_POINT_2F newPosition, float fMove)
{
	originalPosition = position;
	movetoPosition = newPosition;
	fMoveTime = fMove;
	fElapsed = 0.0f;

	bMoving = true;
}

D2D1_RECT_L Camera::GetSight()
{
	D2D1_RECT_L returnRect;

	int iHalfX = screenSize.x / 2;
	int iHalfY = screenSize.y / 2;

	int iXAdjust = iHalfX * alignTo.x;
	int iYAdjust = iHalfY * alignTo.y;

	returnRect.top = position.y + iYAdjust - iHalfY;
	returnRect.bottom = position.y + iYAdjust + iHalfY;
	returnRect.left = position.x + iXAdjust - iHalfX;
	returnRect.right = position.x + iXAdjust + iHalfX;

	return returnRect;
}

void Camera::AttachToEnity(Enity* p_Enity)
{
	if (p_Enity != 0)
	{
		p_attachedTo = p_Enity;
	}
}

void Camera::Decoupple()
{
	p_attachedTo = 0;
}

void Camera::Update()
{
	if (bMoving)
	{
		D2D1_POINT_2F Temp;

		Temp.x = movetoPosition.x - originalPosition.x;
		Temp.y = movetoPosition.y - originalPosition.y;

		fElapsed += Clock::GetClock()->GetDelta();

		if (fElapsed > fMoveTime)
		{
			fElapsed = fMoveTime;
			bMoving = false;
		}

		float fTemp = fElapsed / fMoveTime;

		position.x = originalPosition.x + (Temp.x * fTemp);
		position.y = originalPosition.y + (Temp.y * fTemp);
	}
	else if (p_attachedTo != 0)
	{
		D2D1_POINT_2F newPos;

		p_attachedTo->GetPosition(&newPos);

		D2D1_RECT_F AdjustedBounds;

		int iHalfX = screenSize.x / 2;
		int iHalfY = screenSize.y / 2;

		int iXAdjust = iHalfX * alignTo.x;
		int iYAdjust = iHalfY * alignTo.y;

		AdjustedBounds.top = (position.y + iYAdjust - iHalfY) + Bounds.top;
		AdjustedBounds.bottom = AdjustedBounds.top + (Bounds.bottom - Bounds.top);
		AdjustedBounds.left = (position.x + iXAdjust - iHalfX) + Bounds.left;
		AdjustedBounds.right = AdjustedBounds.left + (Bounds.right - Bounds.left);
		
		D2D1_POINT_2F SnapPos;
		float Offset;

		if (newPos.x > AdjustedBounds.right)
		{
			Offset = newPos.x - AdjustedBounds.right;
			SnapPos.x = position.x + Offset;
		}
		else if (newPos.x < AdjustedBounds.left)
		{
			Offset = newPos.x - AdjustedBounds.left;
			SnapPos.x = position.x + Offset;
		}
		else
		{
			SnapPos.x = position.x;
		}

		if (newPos.y > AdjustedBounds.bottom)
		{
			Offset = newPos.y - AdjustedBounds.bottom;
			SnapPos.y = position.y + Offset;
		}
		else if (newPos.y < AdjustedBounds.top)
		{
			Offset = newPos.y - AdjustedBounds.top;
			SnapPos.y = position.y + Offset;
		}
		else
		{
			SnapPos.y = position.y;
		}

		SetPosition(SnapPos);
		
	}
}

Camera::Camera()
{
	p_attachedTo = 0;
}

Camera::~Camera()
{
}