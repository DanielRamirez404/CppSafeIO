cmake_minimum_required(VERSION 3.14)
project(my_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT DEFINED CPP_SAFE_IO)
    set(CPP_SAFE_IO "CppSafeIO" CACHE STRING "Name for the CppSafeIO library")
endif()

add_subdirectory(src)
