#include "../inc/game.h"

Game game;

int main(int argc, char* argv[]){
	gameInit("hello",512,512);

	while(gameRunning()){
		gameRender(game.renderer);
		gameHandleEvent();
	}

	gameClean();
	return 0;
}

