# CMakeList.txt : CMake project for Echo Project, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Echo Project")

# Add source to this project's executable.
add_executable (ECHO_PROJECT "Echo Project.cpp" "Echo Project.h"  "src/Libraries/Common/TestingGround.cpp")

set(LIBRARIES_DIR src/Libraries)
set(EXECUTABLE_DIR src/Echo)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "build/runtime")
set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY "build/lib")
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY "build/lib")

include_directories("${LIBRARIES_DIR}/Common")

add_subdirectory("${LIBRARIES_DIR}/Acoustics")
add_subdirectory("${LIBRARIES_DIR}/Audio")
add_subdirectory("${LIBRARIES_DIR}/Common")
add_subdirectory("${LIBRARIES_DIR}/EchoReflections")
add_subdirectory("${LIBRARIES_DIR}/EchoReverb")
add_subdirectory("${LIBRARIES_DIR}/Math")
add_subdirectory("${LIBRARIES_DIR}/WorldSpace")

add_subdirectory("${EXECUTABLE_DIR}/AcousticsGenerator")
add_subdirectory("${EXECUTABLE_DIR}/AudioObjectIO")
add_subdirectory("${EXECUTABLE_DIR}/ReflectionsProcessor")
add_subdirectory("${EXECUTABLE_DIR}/ReverbBaker")
add_subdirectory("${EXECUTABLE_DIR}/Simulator")
add_subdirectory("${EXECUTABLE_DIR}/WorldGenerator")






# TODO: Add tests and install targets if needed.
