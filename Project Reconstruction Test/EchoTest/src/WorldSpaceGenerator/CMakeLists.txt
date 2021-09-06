# CMakeList.txt : CMake project for EchoTest, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("WorldSpace")

# Add source to this project's executable.
add_library (WorldSpace "World.cpp" "World.h")
include_directories(${ACOUSTICS_DIRECTORY})

# TODO: Add tests and install targets if needed.
