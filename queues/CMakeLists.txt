cmake_minimum_required(VERSION 3.12)
project(queues)

set(CMAKE_CXX_STANDARD 14)

add_executable(queues
        main.cpp
        Queue.cpp
        Queue.h)
