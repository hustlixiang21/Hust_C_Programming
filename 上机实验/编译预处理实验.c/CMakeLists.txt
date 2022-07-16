cmake_minimum_required(VERSION 3.20)
project(_c C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(_c
        file.h
        file1.c
        flle2.c)
