﻿# CMakeList.txt : CMake project for Echo Project, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Acoustics Generator")

# Add source to this project's executable.
add_executable (ACOUSTICS_GENERATOR "AcousticsGenerator.cpp")

set(LIBRARIES_DIR ../Libraries)
include_directories(${LIBRARIES_DIR}/Acoustics)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../../build/runtime")
set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY "../../build/lib")
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY "../../build/lib")





# TODO: Add tests and install targets if needed.
