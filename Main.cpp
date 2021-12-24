#include <Windows.h>
#include "Game.h"
#include "PlayerController.h"

LRESULT CALLBACK WndProc(HWND hwnd, UINT iMessage, WPARAM wPram, LPARAM lPram)
{
	int iReturn = 0;

	switch (iMessage)
	{
	case WM_KEYDOWN:
		if (wPram == VK_ESCAPE)
		{
			DestroyWindow(hwnd);
		}
		else
		{
			PlayerController::GetController()->PassWindowsMessage(iMessage, wPram, lPram);
		}
		break;

	case WM_KEYUP:
		PlayerController::GetController()->PassWindowsMessage(iMessage, wPram, lPram);
		break;

	case WM_CREATE:
		iReturn = 0;
		break;

	case WM_NCCREATE:
		iReturn = 1;
		break;

	case WM_DESTROY:
		PostQuitMessage(0);
		iReturn = 1;
		break;

	case WM_DISPLAYCHANGE:
		InvalidateRect(hwnd, NULL, false);
		iReturn = 0;
		break;

	case WM_PAINT:
		ValidateRect(hwnd, NULL);
		iReturn = 0;
		break;

	case WM_CLOSE:
		DestroyWindow(hwnd);
		iReturn = 1;
		break;

	default:
		DefWindowProc(hwnd, iMessage, wPram, lPram);
		break;
	}

	return iReturn;
}

int CALLBACK WinMain(HINSTANCE Hinstance, HINSTANCE HinstanceLast, LPSTR cmdLine, int iShow)
{
	Game* pGame = 0;

	DWORD Error = 0;

	MSG msg;

	int iReturn = 0;

	static TCHAR szWindowClass[] = _TCHAR_DEFINED("Game Name Goes Here");
	static TCHAR szWindowTitle[] = _TCHAR_DEFINED("WINDOW STUFF");
	static TCHAR szWindowName[] = _TCHAR_DEFINED("Game Name Goes Here");

	WNDCLASSEX wcex;
	HWND hwnd = 0;

	wcex.cbSize = sizeof(WNDCLASSEX);
	wcex.style = CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc = WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = Hinstance;
	wcex.hIcon = NULL;
	wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wcex.lpszMenuName = NULL;
	wcex.lpszClassName = szWindowClass;
	wcex.hIconSm = NULL;
	
	int Atom = RegisterClassEx(&wcex);

	Error = GetLastError();

	if (Error == 0 && Atom != 0)
	{
		hwnd = CreateWindowEx(WS_EX_OVERLAPPEDWINDOW ,szWindowClass, szWindowTitle, WS_OVERLAPPEDWINDOW, 100, 100, 520, 543, NULL, NULL, Hinstance,NULL);

		Error = GetLastError();

		if (hwnd != 0 && Error == 0)
		{
			ShowWindow(hwnd, iShow);

			bool bIsMessage;

			pGame = new Game;

			if (pGame != 0)
			{
				PlayerController::GetController()->bStartup(Hinstance);

				pGame->Start(hwnd);

				int iQuit = 0;

				do
				{
					bIsMessage = PeekMessage(&msg, NULL, 0, 0, PM_REMOVE);
					if (bIsMessage)
					{
						TranslateMessage(&msg);
						DispatchMessage(&msg);
					}
					else
					{
						pGame->Play();
					}

				} while (msg.message != WM_QUIT || iQuit != 0);

				delete pGame;
			}
			else
			{
				MessageBoxEx(NULL, "Couldent create the game, probably insuficent memory", "you just lost it FYI", MB_OK | MB_ICONERROR, 0);
				iReturn = 1;
			}
		}
		else
		{
			Error = GetLastError();

			MessageBoxEx(NULL, "We couldent make the Window show up", "does it know its its birthday?", MB_OK | MB_ICONERROR, 0);
			iReturn = 1;
		}
	}
	else
	{
		MessageBoxEx(NULL, "Failed to create Window Object, get off Windows 3.11!", "srsly, whats wrong with you", MB_OK | MB_ICONERROR, 0);
		iReturn = 1;
	}

	return iReturn;
}