cmake_minimum_required(VERSION 3.20)
project(ReversePermutation)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT MSVC)
    add_compile_options(
            -Wall
            -Wextra
            -Werror
            -Wpedantic
            -Wshadow
            -Wunused
    )
else()
    add_compile_options(/W4 /WX)
endif()

add_executable(ReversePermutation main.cpp)