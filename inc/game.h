#pragma once

#include "SDL2/SDL_render.h"
#include <SDL2/SDL.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct{
	SDL_Window* window;
	SDL_Renderer* renderer;
	bool isRunning;
} Game;
extern Game game;

void gameInit(const char* title, int widht, int height);
void gameUpdate();
void gameRender(SDL_Renderer* renderer);
void gameHandleEvent();
bool gameRunning();
void gameClean();

