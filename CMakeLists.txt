cmake_minimum_required(VERSION 3.14)
project(lab4)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab4 main.cpp includes/display.h sources/display.cpp includes/functions.h sources/function.cpp includes/point.h includes/individual.h)