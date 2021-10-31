#include <stdio.h>
int main()
{
	int s,count=0,Items;	//数值、项计数、项数
	int i, j;	//循环计数
	scanf("%d",&Items);	//输入项数
	for (i = 1,s=1; count<Items; s = 1, i++)//行数i从1开始
	{
		printf("%d ",s);//每行的第一项1
		count++;
		for (j = 1; j < i && count<Items ; j++)//列位置j绕过第一个直接开始循环
		{
			s = (i - j) * s/j;//通项公式,s-前项值
			printf("%d ", s);
			count++;//输出项计数
		}
		printf("\n");
		if(count>=Items)
			break;
	}
	return 0;
}
