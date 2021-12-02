#include <stdio.h>
#include <string.h>
int main()
{
char strs[5][100]={0};
char (*p)[100],(*pp)[100];//¶¨ÒåÖ¸Ïò¶þÎ¬Êý×éµÄÐÐÖ¸Õë
int i;
printf("ÊäÈë5¸ö×Ö·û´®\n");
for(i=0;i<5;i++)
gets(strs[i]);
for(p=strs;p<strs+4;p++)
{
for(pp=p+1;pp<strs+5;pp++)
{
if(strcmp(*p,*pp)<0)//×Ö·û´®±È½Ï
{
char tmp[100];//ÁÙÊ±Êý×éÊ¹ÓÃºó×ÔÊÍ·Å
strcpy(tmp,*p);
strcpy(*p,*pp);
strcpy(*pp,tmp);
}
}
}
printf("\nÅÅÐòºó:\n");
for(p=strs;p<strs+5;p++)
printf("%s\n",*p);
printf("\n");
return 0;
}
