#include "Clock.h"

void Clock::Update()
{
	LARGE_INTEGER lOld = lCurrent;

	QueryPerformanceCounter(&lCurrent);

	fDelta = fCycle * (lCurrent.QuadPart - lOld.QuadPart);
}

Clock * Clock::GetClock()
{
	if (p_Clock == 0)
	{
		p_Clock = new Clock;

		if (p_Clock == 0)
		{
			//bad shit yo
		}
	}

	return p_Clock;
}

void Clock::DestroyClock()
{
	if (p_Clock != 0)
	{
		delete p_Clock;
	}
}

float Clock::GetDelta()
{
	return fDelta;
}

Clock::Clock()
{
	QueryPerformanceFrequency(&lCpuRate);
	QueryPerformanceCounter(&lCurrent);

	fCycle = 1.0f / lCpuRate.QuadPart;
}

Clock::~Clock()
{
	p_Clock = 0;
}

Clock* Clock::p_Clock = 0;