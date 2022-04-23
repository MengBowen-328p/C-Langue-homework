#include<stdio.h>
void main()
{
	char str[3][101];//定义二维数组
	int word=0,space=0,i,j,before=-1;
	//输入3行字符串
	for(i=0;i<3;i++)
		gets(str[i]);
	//逐行分析单词的结束标识空格或标点符号
	for(i=0;i<3;i++)
	{
		j=0;
		before=0;//开始字符位置
		while(str[i][j]!='\0')//分析统计i行字符串
		{
			if(str[i][j]==' ')
			{
				space++;//空格数+1;
				if(j-before>0)//前一个字符不是空格
					word++;//单词数加1
				/*BLANK*/before=j+1/*BLANK*/;//下一单词的开始位置号
			}
			else if(!(str[i][j]>='A' && str[i][j]<='Z' ||str[i][j]>='a' && str[i][j]<='z' ||
				str[i][j]>='0' && str[i][j]<='9'))//如果不是上述字符,则为单词分隔符
			{
				if(j-before>0)//字符长度>0则为单词
					/*BLANK*/word++/*BLANK*/;//单词数加1
				/*BLANK*/before=j+1/*BLANK*/;//下一单词的开始位置
			}
			j++;
		}
		if(j-before>0)
			/*BLANK*/word++/*BLANK*/;//单词数加1
	}
	printf("单词%d个空格%d个\n",word,space);
}
