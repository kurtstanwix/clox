cmake_minimum_required(VERSION 3.27)
project(CLox C)

set(CMAKE_C_STANDARD 11)

add_executable(CLox main.c
        common.h
        chunk.h
        chunk.c
        memory.h
        memory.c
        debug.c
        debug.h
        value.h
        value.c
        vm.c
        vm.h
        compiler.c
        compiler.h
        scanner.c
        scanner.h
        object.c
        object.h)

configure_file(testLox.txt testLox.txt COPYONLY)
