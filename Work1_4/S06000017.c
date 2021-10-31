#include <stdio.h>
int main()
{
	int i,a,n,t,sum=0;
	printf("input a and n:");
	scanf("%d%d",&a,&n);
	for(t=0,i=1;i<=n;i++)
	{
		t=t*10+a;
		if(i==1)
			printf("Sn=%d ",t);
		else
			printf("+ %d",t);
		sum+=t;
	}
	printf(" = %d\n",sum);
	return 0;
}