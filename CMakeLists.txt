
cmake_minimum_required(VERSION 3.0)
Project(MathLibExe)
INCLUDE_DIRECTORIES(include)

ADD_EXECUTABLE(MathLibExe src/MathLibExe.cpp src/LinearInterpolate.cpp include/linearInterpolate.h)

