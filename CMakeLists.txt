cmake_minimum_required(VERSION 3.6)
project(lab5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp zad21.h zad21.cpp zad22.cpp zad22.h zad24.cpp zad24.h zad23.cpp zad23.h)
add_executable(lab5 ${SOURCE_FILES})