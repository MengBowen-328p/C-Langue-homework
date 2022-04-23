#include <stdio.h>
#include <string.h>
#define N 10
int main()
{
	char text[N][80];
	char temp[80];//字符串交换用的暂存空间
	int i,j;
	printf("输入%d个国家的英文名:\n", N);
	for (i = 0; i < N; i++)
		gets(text[i]);
	//两两比较
	for (i = 0; i < N-1; i++)
	{
		for(j=i+1; j<N ;j++)
		{
			if(strcmp(text[i],text[j])>0)//strcmp字符串比较函数
			{
				strcpy(temp,text[i]);//strcpy字符串考贝，第1个参数为目标地址
				strcpy(text[i],text[j]);
				strcpy(text[j],temp);
			}
		}
	}
	printf("\n字符串排序后:\n");
	for (i = 0; i < N; i++)
		printf("%s\n", text[i]);
	return 0;
}
