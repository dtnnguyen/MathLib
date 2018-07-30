

cmake_minimum_required(VERSION 3.0)
Project(MathApp)

SET(CMAKE_CXX_STANDARD 14)
SET(BUILD_TESTING ON CACHE BOOL "Build testing")

INCLUDE_DIRECTORIES(include)

INCLUDE(gtest/CMakeLists.txt)
 
INCLUDE(GoogleTest)

ADD_LIBRARY(MathLib src/LinearInterpolate.cpp include/LinearInterpolate.h)
ADD_EXECUTABLE(MathApp src/MathApp.cpp )
TARGET_LINK_LIBRARIES(MathApp MathLib)

IF(WIN32)
	TARGET_LINK_LIBRARIES(MathApp Ws2_32)
ENDIF()

#TARGET_LINK_LIBRARIES(MathApp $<$<PLATFORM_ID:Windows>:ws2_32>)

IF(BUILD_TESTING)
	ADD_SUBDIRECTORY(test)
ENDIF()

#get_cmake_property(_variableNames VARIABLES)
#foreach (_variableName ${_variableNames})
#  message(STATUS "CMAKE: ${_variableName}=${${_variableName}}")
#endforeach()