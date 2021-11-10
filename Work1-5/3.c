#include <stdio.h>
int main() 
{
	int a[10] = { 15,27,31,40,53,66,72,83,96 };
	int b, i, j;
	printf("原数组元素:");
	for (i = 0; i < 9; i++)
		printf("%d ", a[i]);
	printf("\n输入插入数:");
	scanf("%d", &b);
	for (i = 0; i < 9; i++)
	{
		if (b < a[i])//确定插入位置i
		{
			//把所有后面的数字后移一位
			for (j = 9; j >i; j--)
				a[j] = a[j-1];
			break;
		}
	}
	a[i] = b;
	printf("新元素顺序为: ");
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
