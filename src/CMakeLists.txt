add_library(${CPP_SAFE_IO} STATIC cpp-safe-io.cpp)
target_include_directories(${CPP_SAFE_IO} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
