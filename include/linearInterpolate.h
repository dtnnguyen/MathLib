#pragma once


#define MAX_1D_ARRAY_SIZE 9

double linearInterpolate(double x, double x1, double x2, double y1, double y2);
 
double bilinearInterpolate(double x, double y, double xVals[4], double yVals[4], double zVals[4]);

