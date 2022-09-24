cmake_minimum_required(VERSION 3.23)
project(testing C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O2 -Wall")

add_executable(testing main.c test.h test.c)
