cmake_minimum_required(VERSION 3.16)

project(
    test_library
    LANGUAGES CXX
)

add_library(
    test_library
    ${CMAKE_CURRENT_SOURCE_DIR}/src/test_library.cpp
)
target_include_directories(
    test_library
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)
