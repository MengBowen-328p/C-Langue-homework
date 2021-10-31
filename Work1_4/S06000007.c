#include <stdio.h>
int main()
{
	double sum = 0;
	int k;
	for (k = 1; k <= 100; k++)
	{
		sum += k;
	}
	for (k = 1; k <= 50; k++) 
	{
		sum += (k * k);
	}
	for (k = 1; k <= 10; k++)
	{
		sum += (1.0 / k);
	}
	printf("%lf\n", sum);
	return 0;
}
