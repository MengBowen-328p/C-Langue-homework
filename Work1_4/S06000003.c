#include <stdio.h>
int main()
{
	int i,a,b,c;
	for(i=100;i<=999;i++)
	{
		a=i/100;//百位数字
		b=(i-a*100)/10;//十位数字
		c=i-a*100-b*10;//个位数字
		if(i==a*a*a+b*b*b+c*c*c)
			printf("%d\n",i);
	}
	return 0;
}
