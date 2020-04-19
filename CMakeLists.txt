cmake_minimum_required(VERSION 3.13)
project(Cocoa C)

set(CMAKE_C_STANDARD 99)

add_executable(Cocoa1 main.c)

add_executable(Cocoa2 Cocoa.c)

add_executable(Cocoa3 List.c)