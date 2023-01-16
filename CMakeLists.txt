cmake_minimum_required(VERSION 3.24)
project(spis)

set(CMAKE_CXX_STANDARD 14)

include_directories(spis)

add_executable(spis
        spis/modSp.cpp
        spis/modSp.h
        spis/spis.cpp)
