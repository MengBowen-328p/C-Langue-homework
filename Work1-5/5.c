#include <stdio.h>
int main() 
{
	int a[5] = { 8,6,5,4,1 };
	int i,ex;
	printf("原数组元素:");
	for (i = 0; i < 5; i++)
		printf("%d ", a[i]);
	//交换
	for (i = 0; i < 5 / 2; i++) 
	{
		//交换a[i]和a[5-i-1]的值
		ex=a[i];
		a[i]=a[5-i-1];
		a[5-i-1]=ex;
	}
	printf("\n交换后:");
	for (i = 0; i < 5; i++) 
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
