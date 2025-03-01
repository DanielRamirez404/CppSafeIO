cmake_minimum_required(VERSION 3.14)

if(NOT DEFINED CPP_SAFE_IO)
    set(CPP_SAFE_IO "CppSafeIO" CACHE STRING "Name for the CppSafeIO library")
endif()

add_library(${CPP_SAFE_IO} STATIC cpp-safe-io.cpp)

target_include_directories(${CPP_SAFE_IO} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
