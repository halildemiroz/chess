#include "../inc/game.h"

int main(int argc, char* argv[]){
	gameInit("hello",800,600);
	while(gameRunning()){
		gameRender(game.renderer);
		gameHandleEvent();
	}

	gameClean();
	return 0;
}

