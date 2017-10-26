cmake_minimum_required(VERSION 3.8)
project(Shell)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c playground.c playground2.c playgroud3.c)
add_executable(Shell ${SOURCE_FILES})