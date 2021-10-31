#include <stdio.h>
int main()
{
	int m,n,i,gys=0;
	//printf("输入两个正整数:");
	scanf("%d%d",&m,&n);
	for(i=1;i<=m&& i<=n;i++)
	{
		if(m%i==0 && n%i==0/*BLANK*/)
			gys=i;
	}
	printf("%d,%d的最大公约数为%d,最小公倍数为%d\n",m,n,gys,m*n/gys);
	return 0;
}
