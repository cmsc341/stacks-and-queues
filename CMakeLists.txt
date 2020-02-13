cmake_minimum_required(VERSION 3.15)
project(stacks_and_queues)

set(CMAKE_CXX_STANDARD 14)

include_directories(queues)
include_directories(stacks)

add_executable(stacks
    stacks/main.cpp
    stacks/Stack.cpp
    stacks/Stack.h)

add_executable(queues
        queues/main.cpp
        queues/Queue.cpp
        queues/Queue.h)
