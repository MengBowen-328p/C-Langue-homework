#include <stdio.h>
int main()
{
	int a[9];//定义一个9位数组a
	int i, j, sum = 0;
	printf("输入一个3x3矩阵:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) 
		{
			scanf("%d", &a[i*3+j]);
			if (i == j)// 主对角线位置
				sum += a[i*3+j];
		}
	}
	printf("sum=%d\n\n", sum);
	return 0;
}
