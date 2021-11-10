#include<stdio.h>
int main()
{
	int a[10],i,m,t;//m最小元素的位置
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=1,m=0;i<10;i++)
	{
		if(a[m]>a[i])
			m=i;
	}
	if(m!=0)
	{
		t=a[0];
		a[0]=a[m];
		a[m]=t;
	}
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
    return 0;
}
