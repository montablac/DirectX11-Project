#pragma once
#include <Windows.h>
#include "SpriteController.h"
#include "Renderer.h"

class Game
{
public:
	Game();
	~Game();

	void Start(HWND);

	void Play();
private:
	void Update();
	void Draw();

	bool bPlaying = true;

	Renderer* pRenderEngine = 0;
	SpriteController* pSpriteHolder = 0;
};