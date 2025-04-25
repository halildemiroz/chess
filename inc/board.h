#pragma once

#include "SDL2/SDL_render.h"
#include <SDL2/SDL.h>

typedef struct{
  int xpos, ypos;
  int width, height;
  SDL_Rect rect;
} Board;

extern Board board;

void boardInit(int width, int hight);

void boardRender(SDL_Renderer* renderer);

