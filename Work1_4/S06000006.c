#include <stdio.h>
int main()
{
	int m,n,i,gys=0;
	//printf("��������������:");
	scanf("%d%d",&m,&n);
	for(i=1;i<=m&& i<=n;i++)
	{
		if(m%i==0 && n%i==0/*BLANK*/)
			gys=i;
	}
	printf("%d,%d�����Լ��Ϊ%d,��С������Ϊ%d\n",m,n,gys,m*n/gys);
	return 0;
}
