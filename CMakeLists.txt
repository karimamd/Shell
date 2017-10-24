cmake_minimum_required(VERSION 3.8)
project(Shell)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c cmake-build-debug/playground.c cmake-build-debug/playground2.c cmake-build-debug/playgroud3.c)
add_executable(Shell ${SOURCE_FILES})