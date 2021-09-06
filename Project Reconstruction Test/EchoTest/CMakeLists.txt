# CMakeList.txt : CMake project for EchoTest, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("EchoTest" VERSION 1.0
)

# Add source to this project's executable.
add_subdirectory ("src/AcousticModeler")
add_subdirectory ("src/Echo")
set(ACOUSTIC_DIRECTORY src/AcousticModeler)
set(ECHO_DIRECTORY src/Echo)


# TODO: Add tests and install targets if needed.

