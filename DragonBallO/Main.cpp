//Using SDL and standard IO
#include <SDL.h>
#include <stdio.h>
#include "SDLInit.h"
#include "GameManager.h"

extern bool gQuitGame;

int main( int argc, char* args[] )
{
	GameManager gameManager;

	if (gameManager.Init()) {
		while (!gQuitGame) {
			gameManager.Update();
			gameManager.Render();
		}
	}

	//TODO: do something with return value
	(void)gameManager.Cleanup();

	return 0;
}