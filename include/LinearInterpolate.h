#pragma once
#include <stdint.h>

double linearInterpolate(double x, double x1, double x2, double y1, double y2);

double bilinearInterpolate(double x, double y, double xVals[4], double yVals[4], double zVals[4]);

uint32_t testHtonl(uint32_t input);
