#pragma once

#ifndef Windows
#include <Windows.h>
#endif // !Windows

class Clock
{
public:
	void Update();

	static Clock* GetClock();

	static void DestroyClock();

	float GetDelta();
private:
	LARGE_INTEGER lCpuRate;
	LARGE_INTEGER lCurrent;
	float fDelta = 0.0f;
	float fCycle = 0.0f;
	static Clock* p_Clock;

	Clock();

	~Clock();
};
