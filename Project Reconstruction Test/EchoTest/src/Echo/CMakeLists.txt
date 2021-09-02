# CMakeList.txt : CMake project for EchoTest, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project (EchoExecute)

# Add source to this project's executable.
add_executable (EchoExecute "Echo.cpp" "Echo.h")
target_include_directories (EchoExecute PUBLIC
)


#INCLUDE_DIRECTORIES ()
# TODO: Add tests and install targets if needed.
