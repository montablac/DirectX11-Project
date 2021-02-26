#include"Entity.h"
#include"SpriteController.h"
#include"Clock.h"
#include"Camera.h"
#include"PlayerController.h"

Enity::Enity(LPCWSTR cSpriteName, bool bIsAnimated, int iFrames, int iFreamerate, D2D1_POINT_2F startPoint)
{
	if (bIsAnimated)
	{
		iSprite = SpriteController::GetSprites()->AddAnimatedSprite(cSpriteName, iFrames, iFreamerate);
		SpriteController::GetSprites()->SetLocation(iSprite, startPoint.x, startPoint.y);
		position = startPoint;

		spriteSize = SpriteController::GetSprites()->GetSpriteSize(iSprite);

		spriteSize.right = spriteSize.right / iFrames;
	}
	else
	{
		iSprite = SpriteController::GetSprites()->AddStaticSprite(cSpriteName);
		SpriteController::GetSprites()->SetLocation(iSprite, startPoint.x, startPoint.y);
		position = startPoint;

		spriteSize = SpriteController::GetSprites()->GetSpriteSize(iSprite);
	}
}

Enity::~Enity()
{
	if (iSprite != -1)
	{
		SpriteController::GetSprites()->RemoveSprite(iSprite);
	}
}

bool Enity::Draw()
{
	bool bReturn = false;

	if (iSprite != -1)
	{
		D2D1_RECT_L cameraSight = Camera::GetCamera()->GetSight();
		D2D1_RECT_F cameraConverted;
		D2D1_POINT_2F ScreenSize;

		ScreenSize.x = cameraSight.right - cameraSight.left;
		ScreenSize.y = cameraSight.bottom - cameraSight.top;

		cameraConverted.left = cameraSight.left * ScreenMoveScale.x;
		cameraConverted.right = cameraConverted.left + ScreenSize.x;
		cameraConverted.top = cameraSight.top * ScreenMoveScale.y;
		cameraConverted.bottom = cameraConverted.top + ScreenSize.y;

		if (IsOnscreen(cameraConverted))
		{
			if (SpriteController::GetSprites()->SetLocation(iSprite, position.x, position.y, offset.x, offset.y))
			{
				bReturn = SpriteController::GetSprites()->DrawSprite(iSprite);
			}
		}
	}

	return bReturn;
}

void Enity::Update()
{
	ControllerAction Action = 0;
	
	if (p_Controller != 0)
	{
		p_Controller->Update();
		Action = p_Controller->PollController();
	}

	float fDelta = Clock::GetClock()->GetDelta();
	D2D1_POINT_2F posChange = { 0.0f,0.0f };

	switch (EnityType)
	{
	case ENITY_PLAYER:

		bInterpolating = false;

		if (Action & ACTION_LEFT)
		{
			posChange.x = posChange.x - (fMoveSpeed * fDelta);
		}
		if (Action & ACTION_RIGHT)
		{
			posChange.x = posChange.x + (fMoveSpeed * fDelta);
		}
		if (Action & ACTION_UP)
		{
			posChange.y = posChange.y - (fMoveSpeed * fDelta);
		}
		if (Action & ACTION_DOWN)
		{
			posChange.y = posChange.y + (fMoveSpeed * fDelta);
		}

		position.x = position.x + posChange.x;
		position.y = position.y + posChange.y;

		break;

	case ENITY_ENEMY:
		break;

	case ENITY_PROJECTILE:
		break;

	case ENITY_OTHER:
	case ENITY_GENERIC:
	default:
		if (bInterpolating)
		{
			D2D1_POINT_2F temp;

			temp.x = interpolationTarget.x - interpolationStart.x;
			temp.y = interpolationTarget.y - interpolationStart.y;

			fDeltaTotal = fDeltaTotal + Clock::GetClock()->GetDelta();

			if (fDeltaTotal > fInterpolationTime)
			{
				fDeltaTotal = fInterpolationTime;
				bInterpolating = false;
			}

			float fMove = fDeltaTotal / fInterpolationTime;

			position.x = interpolationStart.x + (temp.x * fMove);
			position.y = interpolationStart.y + (temp.y * fMove);
		}
		break;
	}
}

void Enity::AttachController(Controller* p_NewController, EnityTypes ControlerType)
{
	if (p_NewController != 0)
	{
		p_Controller = p_NewController;

		EnityType = ControlerType;
	}
}

void Enity::SetSpriteOffset(float fXOffset, float fYOffset)
{
	if (fXOffset > 1.0f)
	{
		fXOffset = 1.0f;
	}
	else if (fXOffset < -1.0f)
	{
		fXOffset = -1.0f;
	}
	if (fYOffset > 1.0f)
	{
		fYOffset = 1.0f;
	}
	else if (fYOffset < -1.0f)
	{
		fYOffset = -1.0f;
	}

	offset.x = fXOffset;
	offset.y = fYOffset;
}

void Enity::GetPosition(D2D1_POINT_2F* _return)
{
	if (_return != 0)
	{
		_return->x = position.x;
		_return->y = position.y;
	}
}

void Enity::SetPosition(D2D1_POINT_2F point)
{
	position.x = point.x;
	position.y = point.y;

}

void Enity::InterpolatePosition(D2D1_POINT_2F point, float fTime)
{
	interpolationStart.x = position.x;
	interpolationStart.y = position.y;

	interpolationTarget.x = point.x;
	interpolationTarget.y = point.y;

	bInterpolating = true;

	fInterpolationTime = fTime;
	fDeltaTotal = 0.0f;
}

void Enity::SetLayerScale(D2D1_POINT_2F scale)
{
	ScreenMoveScale = scale;
}

bool Enity::IsOnscreen(D2D1_RECT_F screen)
{
	bool bReturn = false;

	D2D1_RECT_F SpritePos;

	int iHeight = (spriteSize.bottom - spriteSize.top) / 2;
	int iWidth = (spriteSize.right - spriteSize.left) / 2;

	int iXAdjust = iHeight * offset.x;
	int iYAdjust = iWidth * offset.y;

	SpritePos.left = (position.x * ScreenMoveScale.x) + iXAdjust - iWidth;
	SpritePos.top = (position.y * ScreenMoveScale.y) + iYAdjust - iHeight;
	SpritePos.right = (position.x * ScreenMoveScale.x) + iXAdjust + iWidth;
	SpritePos.bottom = (position.y * ScreenMoveScale.y) + iYAdjust + iHeight;

	if ((SpritePos.bottom > screen.top && SpritePos.top < screen.bottom) && (SpritePos.right > screen.left && SpritePos.left < screen.right))
	{
		bReturn = true;
	}

	return bReturn;
}