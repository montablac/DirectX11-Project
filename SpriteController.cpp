#include "SpriteController.h"
#include "Clock.h"
#include "Camera.h"

int SpriteController::AddStaticSprite(LPCWSTR p_cFileName)
{
	int iReturn = -1;
	bool bResult;

	Sprite* pNewSprite = new Sprite;
	AnimatedInfo* pNewAnimation = new AnimatedInfo;

	bool bLoaded = false;

	for (int i = 0; i < iTotalSprites && !bLoaded; i++)
	{
		if (vAnimInfo[i]->p_cFileName == p_cFileName && vbInUse[i])
		{
			iReturn = i;
			bLoaded = true;
			vAnimInfo[i]->iRefrences++;
		}
	}

	if (pNewSprite != 0 && pNewAnimation != 0 && !bLoaded)
	{
		bResult = pNewSprite->LoadSprite(p_cFileName);

		if (bResult)
		{
			pNewAnimation->bAnimated = false;
			pNewAnimation->p_cFileName = p_cFileName;
			pNewAnimation->p_Sprite = pNewSprite;
			pNewAnimation->iFrames = 1;
			pNewAnimation->iRefrences = 1;

			D2D1_SIZE_F Size;
			D2D1_RECT_F Draw;

			pNewSprite->GetSpriteSize(&Size);

			Draw.top = 0;
			Draw.left = 0;
			Draw.right = Size.width;
			Draw.bottom = Size.height;

			pNewSprite->SetDrawPortion(&Draw);

			vAnimInfo.push_back(pNewAnimation);
			vbInUse.push_back(true);

			iReturn = iTotalSprites;
			iTotalSprites++;
		}
	}

	return iReturn;
}

int SpriteController::AddAnimatedSprite(LPCWSTR p_cFileName, int iFrames, int iFrameRate,bool bCreateNew)
{
	int iReturn = -1;
	bool bResult;

	Sprite* pNewSprite = new Sprite;
	AnimatedInfo* pNewAnimation = new AnimatedInfo;

	bool bLoaded = false;

	for (int i = 0; i < iTotalSprites && !bLoaded; i++)
	{
		if (vAnimInfo[i]->p_cFileName == p_cFileName && vbInUse[i])
		{
			iReturn = i;
			bLoaded = true;
			vAnimInfo[i]->iRefrences++;
		}
	}

	if (pNewSprite != 0 && pNewAnimation != 0 && (!bLoaded || bCreateNew))
	{
		bResult = pNewSprite->LoadSprite(p_cFileName);

		if (bResult)
		{
			pNewAnimation->bAnimated = true;
			pNewAnimation->p_cFileName = p_cFileName;
			pNewAnimation->p_Sprite = pNewSprite;
			pNewAnimation->iCurrentFrame = 0;
			pNewAnimation->fDelta = 0.0f;
			pNewAnimation->iFrameRate = iFrameRate;
			pNewAnimation->iFrames = iFrames;
			pNewAnimation->iRefrences = 1;

			D2D1_SIZE_F Size;
			D2D1_RECT_F Draw;

			pNewSprite->GetSpriteSize(&Size);

			Draw.top = 0;
			Draw.left = 0;
			Draw.right = (Size.width / iFrames);
			Draw.bottom = Size.height;

			pNewSprite->SetDrawPortion(&Draw);

			vAnimInfo.push_back(pNewAnimation);
			vbInUse.push_back(true);

			iReturn = iTotalSprites;
			iTotalSprites++;
		}
	}
	else
	{
		if (pNewSprite != 0)
		{
			delete pNewSprite;
		}
		if (pNewAnimation != 0)
		{
			delete pNewAnimation;
		}
	}

	return iReturn;
}

bool SpriteController::DrawSprite(int iSpriteID)
{
	bool bReturn = false;

	if ((iSpriteID < iTotalSprites && iSpriteID > -1) && vbInUse[iSpriteID])
	{
		vAnimInfo[iSpriteID]->p_Sprite->Draw();

		bReturn = true;
	}

	return bReturn;
}

bool SpriteController::RemoveSprite(int iSpriteID)
{
	bool bReturn = false;

	if (iSpriteID < iTotalSprites && iSpriteID > -1)
	{
		vAnimInfo[iSpriteID]->iRefrences--;

		if (vbInUse[iSpriteID] && vAnimInfo[iSpriteID]->iRefrences < 1)
		{
			vAnimInfo[iSpriteID]->p_Sprite->Release();

			vbInUse[iSpriteID] = false;

			bReturn = true;
		}
	}
	return bReturn;
}

bool SpriteController::ResetAnimation(int iSpriteID)
{
	bool bReturn = false;

	if ((iSpriteID < iTotalSprites && iSpriteID > -1) && vbInUse[iSpriteID])
	{
		vAnimInfo[iSpriteID]->iCurrentFrame = 0;

		bReturn = true;
	}

	return bReturn;
}

bool SpriteController::UpdateAll()
{
	bool bReturn = false;

	for (int i = 0; i < iTotalSprites; i++)
	{
		if (vbInUse[i] && vAnimInfo[i]->bAnimated)
		{
			vAnimInfo[i]->fDelta = vAnimInfo[i]->fDelta + Clock::GetClock()->GetDelta();
			vAnimInfo[i]->iCurrentFrame = int(vAnimInfo[i]->fDelta * vAnimInfo[i]->iFrameRate) % vAnimInfo[i]->iFrames;

			D2D1_SIZE_F Size;
			D2D1_RECT_F Draw;

			vAnimInfo[i]->p_Sprite->GetSpriteSize(&Size);

			Draw.top = 0;
			Draw.left = (Size.width / vAnimInfo[i]->iFrames) * vAnimInfo[i]->iCurrentFrame;
			Draw.right = ((Size.width / vAnimInfo[i]->iFrames) * vAnimInfo[i]->iCurrentFrame) + (Size.width / vAnimInfo[i]->iFrames);
			Draw.bottom = Size.height;

			vAnimInfo[i]->p_Sprite->SetDrawPortion(&Draw);
		}

		bReturn = true;
	}

	return bReturn;
}

void SpriteController::ClearAll()
{
	DestroySprites();

	vbInUse.clear();
	vAnimInfo.clear();
}

SpriteController::SpriteController()
{
}

SpriteController::~SpriteController()
{
	ClearAll();
}

SpriteController * SpriteController::GetSprites()
{
	if (SpriteHolder == 0)
	{
		SpriteHolder = new SpriteController;

		if (SpriteHolder == 0)
		{
			//bad shit yo
		}
	}

	return SpriteHolder;
}

bool SpriteController::DestroySprites()
{
	bool bReturn = false;

	for (int i = 0; i < iTotalSprites; i++)
	{
		if (vbInUse[i])
		{
			RemoveSprite(i);
		}

		bReturn = true;
	}

	return bReturn;
}

bool SpriteController::SetLocation(int iSpriteID, int iX, int iY, float fRightAlign, float fBottomAlign)
{
	bool bReturn = false;

	if ((iSpriteID < iTotalSprites && iSpriteID > -1) && vbInUse[iSpriteID])
	{
		D2D1_SIZE_F size;
		D2D1_RECT_F rect;
		D2D1_RECT_L camera = Camera::GetCamera()->GetSight();

		int iFrame = vAnimInfo[iSpriteID]->iFrames;

		vAnimInfo[iSpriteID]->p_Sprite->GetSpriteSize(&size);

		D2D1_POINT_2F scale = Camera::GetCamera()->GetScale();

		int iHeight = size.height / 2;
		int iWidth = (size.width / iFrame) / 2;

		int iXAdjust = iHeight * fRightAlign;
		int iYAdjust = iWidth * fBottomAlign;

		rect.left = iX + (iXAdjust - iWidth) * scale.x - camera.left;
		rect.top = iY + (iYAdjust - iHeight) * scale.y - camera.top;
		rect.right = iX + (iXAdjust + iWidth) * scale.x - camera.left;
		rect.bottom = iY + (iYAdjust + iHeight) * scale.y - camera.top;

		vAnimInfo[iSpriteID]->p_Sprite->SetScreenLoc(&rect);

		bReturn = true;
	}

	return bReturn;
}

D2D1_RECT_F SpriteController::GetSpriteSize(int iSpriteID)
{
	D2D1_SIZE_F ReturnValue;
	D2D1_RECT_F returnSize;

	returnSize.bottom = 0;
	returnSize.top = 0;
	returnSize.left = 0;
	returnSize.right = 0;

	if ((iSpriteID < iTotalSprites && iSpriteID > -1) && vbInUse[iSpriteID])
	{
		vAnimInfo[iSpriteID]->p_Sprite->GetSpriteSize(&ReturnValue);

		returnSize.right = ReturnValue.width;
		returnSize.bottom = ReturnValue.height;
	}

	return returnSize;
}

SpriteController* SpriteController::SpriteHolder = 0;
