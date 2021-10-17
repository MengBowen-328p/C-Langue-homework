#include <stdio.h>
int main()
{
	int a,b;
	char c1,c2;
	float x,y,z;
	scanf("%5d%5d%c%c%f%f%*f%f",&a,&b,&c1,&c2,&x,&y,&z);
	printf("\n%5d%5d %c %c %f %f %f\n",a,b,c1,c2,x,y,z);
	return 0;
}