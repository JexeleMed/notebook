cmake_minimum_required(VERSION 3.29)
project(figury)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(figury
    DoublyLinkedList.cpp
    DoublyLinkedList.h
    figury.cpp)
