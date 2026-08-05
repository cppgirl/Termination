cmake_minimum_required(VERSION 3.26)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED TRUE)

project(miku C)

add_executable(miku
    "${CMAKE_SOURCE_DIR}/dance.c"
)
