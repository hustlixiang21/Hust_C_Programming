cmake_minimum_required(VERSION 3.20)
project(shabi_c C)

set(CMAKE_C_STANDARD 99)

add_executable(shabi_c main.c file2.c file.h)
