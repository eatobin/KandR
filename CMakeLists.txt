cmake_minimum_required(VERSION 3.19)
project(KandR C)

set(CMAKE_C_STANDARD 11)

configure_file(resources/file.txt
        ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)

#add_executable(KandR C1/fahr.c)
#add_executable(KandR C2/testenum.c)
#add_executable(KandR tester.c)
add_executable(KandR C1/copy1.c)
