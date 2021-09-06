# CMakeList.txt : CMake project for Echo Project, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Reflections Processor")

# Add source to this project's executable.
add_executable (REFLECTIONS_PROCESSOR "ReflectionsProcessor.cpp")

set(LIBRARIES_DIR ../Libraries)
include_directories(${LIBRARIES_DIR}/EchoReflections)







# TODO: Add tests and install targets if needed.
