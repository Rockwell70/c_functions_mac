cmake_minimum_required(VERSION 3.26)
project(params)

set(CMAKE_CXX_STANDARD 20)

add_executable(params main.cpp
        importer.cpp
        importer.h)
