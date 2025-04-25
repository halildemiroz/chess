#include "../inc/board.h"
#include "SDL2/SDL_render.h"

Board board;

void boardInit(int width, int height){
	board.width = width;
	board.height = height;
}

void boardRender(SDL_Renderer *renderer){
	// Yeşil: rgb(115, 149, 82)
	// Beyaz: rgb(235, 236, 208)
	for(int y = 0; y < 8; y++){
		for(int x = 0; x < 8; x++){
			board.rect.x = x*board.width; 
			board.rect.y = y*board.height;
			board.rect.w = board.width;
			board.rect.h = board.height;

			if((x+y) % 2 == 0){
				SDL_SetRenderDrawColor(renderer, 235, 236, 208, 255);		
			}
			else{
				SDL_SetRenderDrawColor(renderer, 115, 149, 82, 255);
			}
			
			SDL_RenderFillRect(renderer, &board.rect);
			
		}
	}
}
