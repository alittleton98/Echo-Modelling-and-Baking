﻿# CMakeList.txt : CMake project for Echo Project, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Audio Object Input/Output")

# Add source to this project's executable.
add_executable (AUDIO_OBJECT_IO "AudioObjectIO.cpp")

set(LIBRARIES_DIR ../Libraries)
include_directories(${LIBRARIES_DIR}/Audio)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../../build/runtime")
set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY "../../build/lib")
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY "../../build/lib")





# TODO: Add tests and install targets if needed.
