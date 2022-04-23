#include <stdio.h>
#include <string.h>
void main()
{
	char str1[81]="Chonqing  Sichaun   Shanghai Guangdong";
	char str2[81]="Guangdong Beijing Tianjing";
	char group[10][81];//单词数组
	char find[80]={0};
	//测出各字符串中的单词数
	int i=0,c=0,rs=0,flag=0;
	//获得字符数组输入
	gets(str1);
	gets(str2);
	//开始以空格' '作为单词分隔符，切分到group[10][81]数组中
	while(str1[i]!='\0')
	{
		if(!(str1[i]>='a'&& str1[i]<='z' || 
			str1[i]>='A'&& str1[i]<='Z' ||
			str1[i]>='0'&& str1[i]<='9' ||
			str1[i]=='.'))//' '空格字符常量
		{
			/*BLANK*/find[c]='\0'/*BLANK*/;//给数组find置入字符串结束标识
			if(strlen(find)>0)//转移到group的rs行字符数组中
			{
				/*BLANK*/strcpy(group[rs],find)/*BLANK*/;//将字符串find拷贝到group[rs]里
				//printf("%s\n",group[rs]);//观察用
				rs++;//下一单词行号
			}
			c=0;
		}
		else
			find[c++]=str1[i];
		i++;
	}
	find[c]='\0';
	if(strlen(find)>0)
	{
		strcpy(group[rs],find);
		//printf("%s\n",group[rs]);//观察用
		rs++;//单词总数
	}
	///////////// 分别用group数组中的字符串中的单词测试str2
	for(i=0;i<rs;i++)
	{
		if(strstr(str2,group[i]))//在str2中group[i]子串，如果找到为非0
		{
			printf("匹配单词:%s\n",group[i]);
			flag=1;
		}
	}
	if(!flag)
		printf("无匹配单词!\n");
}

