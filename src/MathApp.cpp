// MathLibExe.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "linearInterpolate.h"

using namespace std;

int main()
{
    uint32_t output = testHtonl(43);
    cout << "Cross platform test: " << output << endl;
    
	double x1, y1, x2, y2, x, y;
	cout << "Linear Interpolate. Enter value x1, y1" << endl;
	cin >> x1 >> y1;

	cout << "Enter value x2, y2" << endl;
	cin >> x2 >> y2;

	cout << "Enter value x " << endl;
	cin >> x;

	y = linearInterpolate(x, x1, x2, y1, y2);

	cout << "\nLInearinterpolated value for x: " << x  << " is " << y << endl;

    return 0;
}

