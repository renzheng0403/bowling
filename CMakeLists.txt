cmake_minimum_required(VERSION 3.17)
project(bowling C)

set(CMAKE_C_STANDARD 99)

add_executable(bowling main.c countScore.h countScore.c)
add_executable(testCountScore testCountScore.c countScore.h countScore.c)