#include<stdio.h>
void main()
{
	int a[101][101];//定义一个足够大的数组
	int n,i,j,min,max,sf=0;//sf=0不存在鞍点
	puts("输入方正的阶数n:");
	scanf("%d",&n);
	//用户输入矩阵元素值
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			/*BLANK*/scanf("%d",&a[i][j]);/*BLANK*/
	}
	for(i=0;i<n;i++)
	{
		max=0;
		//找出i行的最大元素所在的列号
		for(j=1;j<n;j++)
		{
			if(a[i][max]<a[i][j])
				/*BLANK*/max=j;/*BLANK*/
		}
		//在max列找最小元素所在的行号
		min=0;
		for(j=1;j<n;j++)
		{
			/*BLANK*/if(a[j][max]<a[min][max])
				min=j;/*BLANK*/
		}
		if(min==i)
		{
			sf=1;//存在鞍点标识
			printf("%d(%d,%d)\n",a[min][max],min,max);
		}
	}
	if(!sf)
		printf("没有鞍点\n");
}
