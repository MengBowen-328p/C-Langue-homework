#include <stdio.h>
int main()
{
	int x,sum=0,c=0;
	printf("请输入一个整数:");
	scanf("%d",&x);
	if(x<0)
		x*=-1;
	while(x!=0)
	{
		sum+=x%10;
		if(c==0)
			printf("%d",x%10);
		else
			printf(" + %d",x%10);
		c++;
		x/=10;
	}
	printf(" = %d\n",sum);
	return 0;
}
