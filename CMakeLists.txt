cmake_minimum_required(VERSION 3.13)
project(mastermind_objects)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(mastermind_objects
        models/Color.cpp
        models/Color.h
        models/Combination.cpp
        models/Combination.h
        main.cpp
        Mastermind.cpp
        Mastermind.h
        models/ProposedCombination.cpp
        models/ProposedCombination.h
        models/Result.cpp
        models/Result.h
        models/SecretCombination.cpp
        models/SecretCombination.h)
