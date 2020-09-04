cmake_minimum_required(VERSION 3.0)

project(TestCMake)

set(CMAKE_CXX_STANDARD 11)

# set this variable to Debug to be able to use the debugging symbols
set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_FLAGS "-Wall -Wextra")

set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

add_library(tools ./src/tools.cpp)

add_executable(main ./src/main.cpp)

target_link_libraries(main tools)
