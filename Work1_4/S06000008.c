#include <stdio.h>
int main()
{
	long int x,i,j;
	//printf("pls input x:");
	scanf("%d",&x);//没有判断x的合法性
	for(i=1;i<=x/2;i++)
	{
		for(j=i+1;j<=x/2+1;j++)
		{
			if((i+j)*(j-i+1)/2==x)//由等差数列和公式得到此判断条件
			{
				printf("%d+...+%d=%d\n",i,j,x);
				break;
			}
		}
	}
	return 0;
}
