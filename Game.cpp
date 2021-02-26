#include "Game.h"
#include "Clock.h"
#include "PlayerController.h"

Game::Game()
{
}

Game::~Game()
{
	Clock::DestroyClock();

	if (pRenderEngine != 0)
	{
		delete pRenderEngine;
		pRenderEngine = 0;
	}
}

void Game::Start(HWND hwnd)
{
	Clock::GetClock()->Update();
	pRenderEngine = new Renderer;

	if (pRenderEngine)
	{
		pRenderEngine->Creation(hwnd);

		pSpriteHolder = SpriteController::GetSprites();
	}
	else
	{
		MessageBoxEx(hwnd, "Failed to create Render based objects!", "we cant draw for shit", MB_OK | MB_ICONERROR, 0);
		bPlaying = false;
		PostQuitMessage(1);
	}
}

void Game::Play()
{
	Update();
	Draw();
}

void Game::Update()
{
	Clock::GetClock()->Update();

	pSpriteHolder->UpdateAll();

	PlayerController::GetController()->Update();
}

void Game::Draw()
{
	pRenderEngine->StartScene();
	pRenderEngine->EndScene();
}
