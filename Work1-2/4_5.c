#include <stdio.h>
#define PI 3.1415926
int main()
{
	double h, r, c, s, v;
	printf("h=");
	scanf("%lf", &h);
	printf("r=");
	scanf("%lf", &r);
	c = 2 * PI * r;
	s = PI * r * r;
	v = s * h;
	printf("c=%.2lf  s=%.2lf  v=%.2lf\n", c, s, v);
	return 0;
}
