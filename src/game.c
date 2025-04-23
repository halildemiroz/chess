#include "../inc/game.h"
#include "SDL2/SDL_render.h"

Game game;

bool gameRunning(){return game.isRunning;}


void gameInit(const char *title, int widht, int height){
	if(!SDL_Init(SDL_INIT_EVERYTHING)){
		printf("SDL Initialized\n");
	}
	
	game.window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, widht, height, SDL_WINDOW_SHOWN);
	game.renderer = SDL_CreateRenderer(game.window, -1, 0);
	if(game.window)
		printf("Window created\n");
	if(game.renderer)
		printf("Renderer created\n");
	game.isRunning = 1;
}

void gameRender(SDL_Renderer* renderer){
	SDL_RenderClear(game.renderer);
	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 100);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
}

void gameHandleEvent(){
	SDL_Event event;
	while(SDL_PollEvent(&event)){
		switch (event.type) {
			case SDL_QUIT:
				game.isRunning = 0;
				break;
		}
	}
	
}


void gameClean(){
	SDL_DestroyWindow(game.window);
	SDL_DestroyRenderer(game.renderer);
	SDL_Quit();
	printf("Game Cleaned\n");
}

