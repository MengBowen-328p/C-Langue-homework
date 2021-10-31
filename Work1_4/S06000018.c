#include <stdio.h>
int main()
{
	int n = 10;
	double sum = 0, length = 100;
	int i;
	for (i = 0; i < n; i++)
	{
		sum += length;
		length /= 2.0;
		if (i != n - 1)
			sum += length;
	}
	printf("sum=%lf, length=%lf\n", sum, length);
	return 0;
}
