#include <stdio.h>

int main() {
	float x0, x1, y0, y1, xp, yp;
	/* Get inputs */
	printf("Enter in the first point (x0, y0):\n");
	scanf("%f%f", &x0, &y0);
	printf("Enter in the second point (x1, y1):\n");
	scanf("%f%f", &x1, &y1);
	printf("Enter in the interpolation point (xp): ");
	scanf("%f", &xp);

	/*
	 * Calculate interpolation point using the following method:
	 * 	yp - y0 / y1 - y0  =  xp - x0 / x1 - x0
	 *
	 *  For this short example, yp is the dependent variable.
	 */
	yp = y0 + ((y1 - y0)*(xp-x0)) / (x1 - x0);
	printf("Interpolated value is %f\n", yp);

	return 0;
}