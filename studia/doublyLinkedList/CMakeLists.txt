cmake_minimum_required(VERSION 3.29)
project(doublyLinkedList)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(doublyLinkedList
    DoublyLinkedList.cpp
    DoublyLinkedList.h
    main.cpp)
