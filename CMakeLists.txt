cmake_minimum_required(VERSION 3.10)
include_directories(${PROJECT_SOURCE_DIR})

project(GameOfLife)
add_executable(GameOfLife GameOfLife/GoL.cpp)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)