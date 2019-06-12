cmake_minimum_required(VERSION 3.13)
project(mastermind_objects)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(mastermind_objects
        Color.cpp
        Color.h
        Combination.cpp
        Combination.h
        main.cpp
        Mastermind.cpp
        Mastermind.h
        ProposedCombination.cpp
        ProposedCombination.h
        Result.cpp
        Result.h
        SecretCombination.cpp
        SecretCombination.h)
