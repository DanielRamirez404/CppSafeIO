cmake_minimum_required(VERSION 3.14)

add_library(CppSafeIO STATIC cpp-safe-io.cpp)

target_include_directories(CppSafeIO PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
