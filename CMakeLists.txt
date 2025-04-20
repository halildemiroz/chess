cmake_minimum_required(VERSION 3.10)
project(chess C)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(/opt/homebrew/Cellar/sdl3/3.2.10/include)
link_directories(/opt/homebrew/Cellar/sdl3/3.2.10/lib)

include_directories(/opt/homebrew/Cellar/sdl3_image/3.2.4/include)
link_directories(/opt/homebrew/Cellar/sdl3_image/3.2.4/lib)

include_directories(/opt/homebrew/Cellar/sdl3_ttf/3.2.2/include)
link_directories(/opt/homebrew/Cellar/sdl3_ttf/3.2.2/lib)

link_libraries(SDL3 SDL3_image SDL3_ttf)

add_executable(chess 
	src/main.c)

