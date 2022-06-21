# CMakeList.txt : CMake project for Dropper, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Dropper")

# Add source to this project's executable.
add_executable (Dropper 
	"Main.cpp" 
	"Includes.h"
	"Config.h" 
	"Dropper.cpp" 
	"Dropper.h"
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Dropper PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
