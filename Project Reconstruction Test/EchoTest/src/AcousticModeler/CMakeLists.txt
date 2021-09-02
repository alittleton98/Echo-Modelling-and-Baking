# CMakeList.txt : CMake project for EchoTest, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Acoustic Modeler" VERSION 0.1)

# Add source to this project's executable.
add_library (
AcousticModeler 
"AcousticModeler.h"
"AcousticModeler.cpp"
)

# TODO: Add tests and install targets if needed.
