cmake_minimum_required(VERSION 4.0)
project(OOP_NUU)

set(CMAKE_CXX_STANDARD 14)

include_directories(..)

add_executable(OOP_NUU
        lab3.cpp
        Knight.h
        game_logic.cpp)
