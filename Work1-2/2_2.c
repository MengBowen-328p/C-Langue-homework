#include <stdio.h>
int main()
{
	int a, b;
	float x,y;
	char c1, c2;
	scanf("a=%d,b=%d,x=%f,y=%e,c1=%c,c2=%c",&a,&b,&x, &y,&c1,&c2);
	printf("\na=%d,b=%d\n",a,b);
	printf("x=%f,y=%e\n",x,y);
	printf("c1=%c,c2=%c\n",c1,c2);
	return 0;
}
