cmake_minimum_required(VERSION 3.30)
project(game)

set(CMAKE_CXX_STANDARD 20)

add_executable(game main.cpp
        Entites/Player.cpp
        Entites/Player.h
        Core/Game.cpp
        Core/Game.h
        Entites/Item.cpp
        Entites/Item.h
        Entites/Enemy.cpp
        Entites/Enemy.h)
