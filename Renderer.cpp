#include "Renderer.h"
#include "Entity.h"
#include "Clock.h"
#pragma comment(lib, "d2d1")
#include <math.h>
#include "Camera.h"
#include "PlayerController.h"

Renderer::Renderer()
{
	
}

Renderer::~Renderer()
{
	if (pBrush1 != 0)
	{
		pBrush1->Release();
		pBrush1 = 0;
	}

	if (pBrush2 != 0)
	{
		pBrush2->Release();
		pBrush2 = 0;
	}

	if(pRenderTarget != 0)
	{
		pRenderTarget->Release();
		pRenderTarget = 0;
	}

	if (pFactory != 0)
	{
		pFactory->Release();
		pFactory = 0;
	}
	if (pIWCFactory != 0)
	{
		CoUninitialize();
	}
}

bool Renderer::Creation(HWND INhwnd)
{
	hwnd = INhwnd;
	bool bReturn = false;

	HRESULT hr;

	hr = D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &pFactory);

	if (hr == S_OK)
	{
		RECT ClientArea;

		GetClientRect(hwnd, &ClientArea);

		D2D1_SIZE_U Size = D2D1::SizeU(ClientArea.right - ClientArea.left, ClientArea.bottom - ClientArea.top);

		hr = pFactory->CreateHwndRenderTarget(D2D1::RenderTargetProperties(), D2D1::HwndRenderTargetProperties(hwnd, Size), &pRenderTarget);

		if (hr == S_OK)
		{
			bReturn = true;
			pRenderTarget->CreateSolidColorBrush(D2D1::ColorF::ColorF(D2D1::ColorF::Green), &pBrush1);
			pRenderTarget->CreateSolidColorBrush(D2D1::ColorF::ColorF(D2D1::ColorF::Blue), &pBrush2);

			hr = CoCreateInstance(CLSID_WICImagingFactory, NULL, CLSCTX_INPROC_SERVER, IID_IWICImagingFactory, (LPVOID*)&pIWCFactory);

			if (hr == S_OK)
			{
				Sprite::SetLoaders(pIWCFactory, pRenderTarget);
				TileMap::SetLoaders(pIWCFactory, pRenderTarget);

				pSpriteHandler = SpriteController::GetSprites();

				D2D1_POINT_2F cameraPos;

				cameraPos.x = 250.0f;
				cameraPos.y = 250.0f;

				Camera::GetCamera()->SetPosition(cameraPos);

				cameraPos.x = 0.0f;
				cameraPos.y = 0.0f;

				Camera::GetCamera()->SetAlingment(cameraPos, true, true);

				D2D1_POINT_2L screenSize;

				screenSize.x = ClientArea.right - ClientArea.left;
				screenSize.y = ClientArea.bottom - ClientArea.top;

				Camera::GetCamera()->SetSize(screenSize);

				Camera::GetCamera()->SetScaleing(screenSize);

				D2D1_POINT_2F bounds = { 0.50f ,0.15f };

				Camera::GetCamera()->SetBounds(bounds);

				Camera::GetCamera()->Update();

				_pTestEnity = new Enity(L"test3.png", true, 10, 10);
				_pTestEnity2 = new Enity(L"test3.png", true, 10, 5);

				_pTestMap = new TileMap;

				_pTestMap2 = new TileMap;

				_pTestMap3 = new TileMap;

				_pTestMap2->LoadMapData(L"NightGround2.map");
				_pTestMap->LoadMapData(L"NightGround1.map");
				_pTestMap3->LoadMapData(L"LargeMap.map");

				if (!_pTestMap->CheckIfReady() || !_pTestMap2->CheckIfReady() || !_pTestMap3->CheckIfReady())
				{
					MessageBoxEx(hwnd, "could not load map", "dam, try again", MB_OK | MB_ICONERROR, 0);
				}

				_pTestMap2->SetScale({ 1.0f, 1.0f });
				_pTestMap->SetScale({ 1.0f, 1.0f });
				_pTestMap3->SetScale({1.0f,1.0f});

				if (_pTestEnity != 0 && _pTestEnity2 != 0)
				{
					_pTestEnity->SetPosition({ 250.0f, 250.0f });
					_pTestEnity2->SetPosition({ 0.0f, 250.0f });

					_pTestEnity->SetLayerScale({ 0.5f, 0.5f });
					_pTestEnity2->SetLayerScale({ 0.5f, 0.5f });

					_pTestEnity->AttachController(PlayerController::GetController(), ENITY_PLAYER);
				}
				else
				{
					MessageBoxEx(hwnd, "could not create enity", "dam, try again", MB_OK | MB_ICONERROR, 0);
				}
			}
			else
			{
				MessageBoxEx(hwnd, "Couldent create WIC image factory", "no idea what it does, but its probably bad", MB_OK | MB_ICONERROR, 0);
			}
		}
		else
		{
			MessageBoxEx(hwnd, "Failed to create render target!", "shits broken, yo", MB_OK | MB_ICONERROR, 0);
		}
	}
	else
	{
		MessageBoxEx(hwnd, "Factory Creation failed!", "you must construct additional pylons", MB_OK | MB_ICONERROR, 0);
	}

	return bReturn;
}

void Renderer::StartScene()
{
	fTimeAcumulated = fTimeAcumulated + (1.0f * Clock::GetClock()->GetDelta());
	float fDelta = Clock::GetClock()->GetDelta();
	static float fThirtyD = 0.0f;
	static float fSixtyD = 0.0f;

	static float fTime = 0.0f;

	static float fSixty = 0.0f;
	static float fThirty = 0.0f;

	D2D1_SIZE_F Size = pRenderTarget->GetSize();
	D2D1_RECT_L screen;

	screen = Camera::GetCamera()->GetSight();

	float fHalfWidth = Size.width / 2.0f;
	float fHalfHeight = Size.height / 2.0f;

	pRenderTarget->BeginDraw();
	pRenderTarget->Clear(D2D1::ColorF::ColorF(D2D1::ColorF::White));

	Point1.x = (cosf(fTimeAcumulated) * fHalfWidth) + fHalfWidth - screen.left;
	Point1.y = (sinf(fTimeAcumulated) * fHalfHeight) + fHalfHeight - screen.top;

	Point2.x = (-cosf(fTimeAcumulated) * fHalfWidth) + fHalfWidth - screen.left;
	Point2.y = (-sinf(fTimeAcumulated) * fHalfHeight) + fHalfHeight - screen.top;

	fTime += fDelta;

	if (_pTestEnity != 0 && _pTestEnity2 != 0)
	{
		D2D1_POINT_2F Center;

		_pTestEnity->SetSpriteOffset(0.0f, 0.0f);
		_pTestEnity2->SetSpriteOffset(0.0f, 0.0f);

		Point1.x = (cosf(fTimeAcumulated) * fHalfWidth) + fHalfWidth;
		Point1.y = (sinf(fTimeAcumulated) * fHalfHeight) + fHalfHeight;

		Point2.x = (-cosf(fTimeAcumulated) * fHalfWidth) + fHalfWidth;
		Point2.y = (-sinf(fTimeAcumulated) * fHalfHeight) + fHalfHeight;

		//_pTestEnity->SetPosition(Point1);

		_pTestEnity2->SetPosition(Point2);

		bool bFirst = false;
		if (fTime >= 5.0f && !bFirst)
		{
			//Camera::GetCamera()->Decoupple();
			bFirst = true;
		}
		if (fTime >= 10.0f && bFirst)
		{
			bFirst = false;
			Camera::GetCamera()->AttachToEnity(_pTestEnity);
			fTime = fTime - 10.0f;
		}

		Camera::GetCamera()->Update();

		_pTestEnity->Update();
		_pTestEnity2->Update();

		_pTestMap->DrawMap();
		//_pTestMap2->DrawMap();
		//_pTestMap3->DrawMap();

		_pTestEnity->Draw();
		_pTestEnity2->Draw();
	}
}

bool Renderer::EndScene()
{
	bool bReturn = false;
	HRESULT hr;

	hr = pRenderTarget->EndDraw();

	if (hr == S_OK)
	{
		bReturn = true;
	}

	return bReturn;
}
