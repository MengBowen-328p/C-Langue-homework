#include <stdio.h>
#include <string.h>
int main()
{
	char English_character[26]={0};//定义数组has_this并给赋初值为0
	char ch,str[80]={0};//定义字符变量ch，并定义字符串数组str且赋初值为0
	int i=0;
	while ((ch = getchar()) != '\n')//当输入的字符为回车时结束循环
	{
		if (ch >= 'A' && ch <= 'Z') 
		{
			if(English_character[ch-'A']==0)//两字符重复时
			{
				English_character[ch - 'A'] = 1;//两字符不重复时
				str[i++]=ch;//对数组中的下一位数进行操作
			}
		}
	}
	if(i>0)
	{
		str[i]='\0';
		printf("%s\n", str);
	}
	return 0;
}
