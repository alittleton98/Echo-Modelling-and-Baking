# CMakeList.txt : CMake project for Echo Project, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("WorldSpace")

# Add source to this project's executable.
add_library(WORLDSPACE STATIC "World.cpp" "World.h" "WorldSpaceHeader.h" "WorldObject.h" "Room.h" "Node.h" "Edge.h")

target_include_directories(WORLDSPACE PUBLIC ../Common)

# TODO: Add tests and install targets if needed.
