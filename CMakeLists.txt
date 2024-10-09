cmake_minimum_required(VERSION 3.28)
project(scau_ds_project)

set(CMAKE_CXX_STANDARD 17)
link_libraries(libeasyx.a Winmm)
add_executable(scau_ds_project main.cpp
        scene.h
        menu_scene.h
        game_scene.h)
