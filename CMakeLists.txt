cmake_minimum_required(VERSION 3.14)
if(NOT DEFINED CPP_SAFE_IO)
    set(CPP_SAFE_IO "CppSafeIO" CACHE STRING "Name for the CppSafeIO library")
endif()

project(CPP_SAFE_IO)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)
add_subdirectory(tests)
