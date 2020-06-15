# main project cmakelists. top of the folder
project(cmake_learn)

cmake_minimum_required(VERSION  3.16)

# tells the compiler to look for .h files in this directory
# in addition to the system folders that it already looks in
# this command lets you add <header.h> instead of the local
# "header.h"
include_directories(${PROJECT_SOURCE_DIR}/src)

# when you add a subdirectory, make sure that folder has a CMakeLists.txt file of it's own
# the linking excecuting and all will be taken care of by that cmakelists
add_subdirectory(${PROJECT_SOURCE_DIR}/src)