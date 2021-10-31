#include <stdio.h>
#define S ' '
int main()
{
	int n,i,j;
	printf("Enter n:");
	scanf("%d",&n);//没有判断n的合法性
	for(i=1;i<=n;i++)//打印前n行
	{
		for(j=1;j<=10;j++)//打印每行前面的空格
			putchar(S) ;
		for(j=1;j<=2*(n-i);j++)//打印每行独有的空格
			putchar(S) ;
		for(j=1;j<=2*i-1;j++)//打印每行独有的*
			putchar('*') ;
		printf("\n");
	}
	for(i=1;i<=n-1;i++)//打印后n-1行
	{
		for(j=1;j<=10;j++)//打印每行前面的空格
			putchar(S);
		for(j=1;j<=2*(n-i)-1;j++)//打印每行独有的*
			putchar('*');
		printf("\n");
	}
	return 0;
}
