#pragma once
#include <SDL.h>
#include <stdio.h>

class SDLInit {

public:
	bool Setup();
	bool Cleanup();
	bool Render();
	void Update();

};
