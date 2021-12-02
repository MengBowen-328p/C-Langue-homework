//{{MAIN}}
#include <stdio.h>
#include <string.h>
int cq_strcmp(char *p1, char* p2);
int main()
{
char str1[50];
char str2[50];
int delta;
printf("·Ö±ðÊäÈëÁ½¸ö×Ö·û´®:\n");
gets(str1);
gets(str2);
delta=cq_strcmp(str1,str2);//µ÷ÓÃº¯Êý
//delta=strcmp(str1,str2);
printf("×Ö·û´®±È½Ï½á¹û:\n");
if(delta>0)
printf("%s > %s\n",str1,str2);
else if(delta<0)
printf("%s < %s\n",str1,str2);
else
printf("%s = %s\n",str1,str2);
return 0;
}
//{{MAIN}}
//{{FUNC}}
int cq_strcmp(char *p1, char* p2)
{
int delta=0;
while(*p1!='\0' && *p2!='\0' && delta==0)
{
delta=*p1-*p2;
p1++;
p2++;
}
if(delta==0)
{
//»¹Òª±È½Ï×Ö·û´®³¤¶ÈÇé¿ö
if(*p2!='\0')
return -1;
else if(*p1!='\0')
return 1;
}
return delta;
}
//{{FUNC}}