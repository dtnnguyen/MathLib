
#include "linearInterpolate.h"

/**
*
*	@Name		Interpolate Between Breakpoint Values
*
*	@Function
*
*	This function takes in 2 set of data (x,y) 
*	and perform linear interpolate on a given x.
*
*	@Notes
*
*		(none)
*
*/
double linearInterpolate(double x, double x1, double x2, double y1, double y2)
{
	double result;

	if (x2 != x1)
	{
		result = (y1 + (x - x1) * (y2 - y1) / (x2 - x1));
	}
	else
	{
		result = y1;
	}

	return result;
}


/**
*
*	@Name		Bilinear Interpolate
*
*	@Function
*   
*	This function takes in 3 array of 4 elements indicating 4 corners of a data cell  
*	and perform bilinear interplation for a given coordinates (x,y).
*
*	The array values are ordered in counter clockwise from the bottom left corner.
*   Arrays must have 4 items.
*
*	@Explain
*
*  a00 = z[0], a10 = z[1] - z[0], a01 = z[3] - z[0], a11 = z[0] + z[2] - z[1] - z[3]
*  http://www.geocomputation.org/1999/082/gc_082.htm Figure 5. z = elevation.
*  https://en.wikipedia.org/wiki/Bilinear_interpolation
*
*/
double bilinearInterpolate(double x, double y, double xVals[4], double yVals[4], double zVals[4])
{
	double a00, a10, a01, a11;
	double z, xa, ya;

	a00 = zVals[0];
	a10 = zVals[1] - zVals[0];
	a01 = zVals[3] - zVals[0];
	a11 = zVals[2] + zVals[0] - zVals[3] - zVals[1];

	xa = x - xVals[0];
	ya = y - yVals[0];

	z = a00 + a10 * xa + a01 * ya + a11 * xa * ya;

	return z;
}
