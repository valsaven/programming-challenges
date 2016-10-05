cmake_minimum_required(VERSION 3.6)
project(C)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

set(SOURCE_FILES main.c)
add_executable(C ${SOURCE_FILES})
