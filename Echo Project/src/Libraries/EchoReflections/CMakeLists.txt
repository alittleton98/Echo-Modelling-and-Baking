# CMakeList.txt : CMake project for Echo Project, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("EchoReflections")

# Add source to this project's executable.
add_library (ECHO_REFLECTIONS STATIC Reflections.h Reflections.cpp)


# TODO: Add tests and install targets if needed.
