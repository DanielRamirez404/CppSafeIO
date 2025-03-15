cmake_minimum_required(VERSION 3.14)
include(CTest)

add_executable(CppSafeIO-Tests tests.cpp)
target_link_libraries(CppSafeIO-Tests ${CPP_SAFE_IO})

add_executable(CppSafeIO-AutomatedTests automated-tests.cpp)
target_link_libraries(CppSafeIO-AutomatedTests ${CPP_SAFE_IO})
add_test(NAME CppSafeIO-Testing COMMAND CppSafeIO-AutomatedTests)
