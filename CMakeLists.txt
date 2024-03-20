cmake_minimum_required(VERSION 3.22)
project(labCpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(labCpp main.cpp zlab02.cpp zlab02.h zlab03.cpp zlab03.h
        organizm.cpp
        organizm.h ustawienia.h generator_losowy.cpp generator_losowy.h sasiedztwo.cpp sasiedztwo.h)
