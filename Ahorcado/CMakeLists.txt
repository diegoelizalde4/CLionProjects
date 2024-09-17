cmake_minimum_required(VERSION 3.29)
project(Ahorcado)

set(CMAKE_CXX_STANDARD 20)

add_executable(Ahorcado main.cpp
        Ahorcado.cpp
        Ahorcado.h
        monito.cpp
        monito.h)
