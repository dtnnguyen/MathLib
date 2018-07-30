
cmake_minimum_required(VERSION 3.0)
Project(MathApp)
INCLUDE_DIRECTORIES(include)

ADD_EXECUTABLE(MathApp src/MathApp.cpp src/LinearInterpolate.cpp include/LinearInterpolate.h)

IF(WIN32)
	TARGET_LINK_LIBRARIES(MathApp Ws2_32)
ENDIF()

#TARGET_LINK_LIBRARIES(MathApp $<$<PLATFORM_ID:Windows>:ws2_32>)