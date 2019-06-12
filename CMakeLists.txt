cmake_minimum_required(VERSION 3.13)
project(mastermind_objects)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(mastermind_objects
        color.cpp
        color.h
        combination.cpp
        combination.h
        main.cpp
        mastermind.cpp
        mastermind.h
        proposedcombination.cpp
        proposedcombination.h
        result.cpp
        result.h
        secretcombination.cpp
        secretcombination.h)
