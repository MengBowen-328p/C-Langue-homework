#include <stdio.h>
int main()
{
	double ds[5]={0},sum=0;
	int i=0;
	for(i=0;i<5;i++)
	{
		scanf("%lf",&ds[i]);
		sum+=ds[i];
	}
	printf("\naverage is %.1f\n",sum/5);
	for(i=0;i<5;i++)
		printf("%.1f\t",ds[i]);
	printf("\n\n");
    return 0;
}
