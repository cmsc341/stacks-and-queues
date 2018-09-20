cmake_minimum_required(VERSION 3.12)
project(stacks)

set(CMAKE_CXX_STANDARD 14)

add_executable(stacks
    main.cpp Stack.cpp Stack.h)

add_executable(swap swap.cpp)
