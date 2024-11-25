cmake_minimum_required(VERSION 3.26)

project(test-library-cpp)

add_library(${PROJECT_NAME} SHARED ${CMAKE_SOURCE_DIR}/src/test-library-cpp.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/include)
