#include <stdio.h>
int main()
{
	const int n = 1000;
	int i, j, sum;
	for (i = 2; i <= n; i++) 
	{
		sum = 0;
		for (j = 1; j < i; j++) 
		{
			if (i % j == 0) 
				sum += j;
		}
		if (sum == i)//iÊÇÍêÊý
		{
			printf("%d = ", i);
			for (j = 1; j < i; j++) 
			{
				if (i % j == 0) 
				{
					if(j==1)
						printf("%d",j);
					else
						printf(" + %d", j);
				}
			}
			printf("\n");
		}
	}
	return 0;
}