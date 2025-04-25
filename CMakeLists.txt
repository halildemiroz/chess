cmake_minimum_required(VERSION 3.10)
project(chess C)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(/opt/homebrew/Cellar/sdl2/2.32.2/include)
link_directories(/opt/homebrew/Cellar/sdl2/2.32.2/lib)

include_directories(/opt/homebrew/Cellar/sdl2_image/2.8.8/include)
link_directories(/opt/homebrew/Cellar/sdl2_image/2.8.8/lib)

include_directories(/opt/homebrew/Cellar/sdl2_ttf/2.24.0/include)
link_directories(/opt/homebrew/Cellar/sdl2_ttf/2.24.0/lib)

link_libraries(SDL2 SDL2main SDL2_image SDL2_ttf)

add_executable(chess 
	src/main.c
	src/game.c
	src/board.c)

