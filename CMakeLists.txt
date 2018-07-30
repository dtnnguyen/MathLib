
cmake_minimum_required(VERSION 3.0)
Project(MathLibApp)
INCLUDE_DIRECTORIES(include)

ADD_EXECUTABLE(MathLibApp src/MathLibExe.cpp src/LinearInterpolate.cpp include/linearInterpolate.h)

IF(WIN32)
	TARGET_LINK_LIBRARIES(MathLibApp Ws2_32)
ENDIF()

#TARGET_LINK_LIBRARIES(MathLibApp $<$<PLATFORM_ID:Windows>:ws2_32>)