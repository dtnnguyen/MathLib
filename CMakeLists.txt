
cmake_minimum_required(VERSION 3.0)
Project(MathApp)

SET(BUILD_TESTING ON CACHE BOOL "Build testing")

INCLUDE_DIRECTORIES(include)

INCLUDE(gtest/CMakeLists.txt)
find_package(GTest)

ADD_EXECUTABLE(MathApp src/MathApp.cpp src/LinearInterpolate.cpp include/LinearInterpolate.h)

IF(WIN32)
	TARGET_LINK_LIBRARIES(MathApp Ws2_32)
ENDIF()

#TARGET_LINK_LIBRARIES(MathApp $<$<PLATFORM_ID:Windows>:ws2_32>)

IF(BUILD_TESTING)
	ADD_SUBDIRECTORY(test)
ENDIF()

get_cmake_property(_variableNames VARIABLES)
foreach (_variableName ${_variableNames})
  message(STATUS "CMAKE: ${_variableName}=${${_variableName}}")
endforeach()