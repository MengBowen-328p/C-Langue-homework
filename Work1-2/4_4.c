#include <stdio.h>
#include <math.h>
int main()
{
	double n = 10, r = 0.067, p;
	p = pow(1 + r, n);
	printf("p=%lf\n", p);
	return 0;
}