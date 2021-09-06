# CMakeList.txt : CMake project for Echo Project, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Acoustics Generator")

# Add source to this project's executable.
add_executable (REVERB_BAKER "ReverbBaker.cpp")

set(LIBRARIES_DIR ../Libraries)
include_directories(${LIBRARIES_DIR}/EchoReverb)
include_directories(${LIBRARIES_DIR}/Audio)







# TODO: Add tests and install targets if needed.
