#include <stdio.h>
int main()
{
	int i,a,b,c;
	for(i=100;i<=999;i++)
	{
		a=i/100;//��λ����
		b=(i-a*100)/10;//ʮλ����
		c=i-a*100-b*10;//��λ����
		if(i==a*a*a+b*b*b+c*c*c)
			printf("%d\n",i);
	}
	return 0;
}
