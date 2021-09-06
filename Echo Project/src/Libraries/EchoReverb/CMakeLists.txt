# CMakeList.txt : CMake project for Echo Project, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("EchoReverb")

# Add source to this project's executable.
add_library (ECHO_REVERB STATIC ReverbHeaders.h Reverb.cpp)
# TODO: Add tests and install targets if needed.
