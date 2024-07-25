cmake_minimum_required(VERSION 3.28)

project(eric C)

set(CMAKE_C_STANDARD 17)

configure_file(file.txt
        ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)

add_executable(eric
        linecount.c)
