cmake_minimum_required(VERSION 3.23.1)
project(CircularBuffer2d)
set(CMAKE_CXX_STANDARD 14)
add_executable(CircularBuffer2d CircularBuffer2d.h tests.cpp)