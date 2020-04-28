cmake_minimum_required(VERSION 3.16)
project(laba1)

set(CMAKE_CXX_STANDARD 14)


set(PROJECT_HEADERS
        class.h
        )
set(PROJECT_SOURCES
        main.cpp
        class.cpp
        )

add_executable(laba1 main.cpp class.cpp )