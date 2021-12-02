//{{MAIN}}
#include <stdio.h>
#include <string.h>
int GetStrLength(char* pstr);
int main()
{
char str[100];
int len=0;
gets(str);
printf("\nµ÷ÓÃº¯ÊýÊä³ö:\n");
len=GetStrLength(str);
printf("%sµÄ³¤¶ÈÊÇ:%d\n",str,len);
return 0;
}
//{{MAIN}}
//{{FUNC}}
int GetStrLength(char* pstr)
{
int size=0;
while(*pstr!='\0')
{
size++;
pstr++;
}
return size;
}
//{{FUNC}}
