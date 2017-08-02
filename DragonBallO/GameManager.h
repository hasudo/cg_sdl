#pragma once
#include <SDL.h>
#include <stdio.h>

class GameManager {

public:
	bool Init();
	bool Cleanup();
	bool Render();
	void Update();

};
