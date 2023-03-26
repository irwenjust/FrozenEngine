#include <iostream>
#include "CoreMinimal.h"

// fixed deltaTime update
void EngineLoop()
{
	float deltaTime = 0.0f;
	int64 engineTickCountOnStart = GetTickCount64();
	float currentTime = 0.0f;
	float lastTime = 0.0f;
	while (true)
	{
		while (deltaTime < MIN_DELTATIME)
		{
			currentTime = (GetTickCount64() - engineTickCountOnStart) / 1000.0f;
			deltaTime = currentTime - lastTime;
		}

		FE_LOG("Engine Tick: %f", deltaTime);

		lastTime = currentTime;
		deltaTime = 0.0f;
	}
}

int main()
{
	FE_LOG("FrozenEngine v0.1");
	EngineLoop();
	return 0;
}
