add_library(${CPP_SAFE_IO} STATIC cppsafeio.cpp)
target_include_directories(${CPP_SAFE_IO} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
