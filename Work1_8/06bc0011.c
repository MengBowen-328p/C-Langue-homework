//{{MAIN}}
#include <stdio.h>
int itoa(int i, char s[]);
int main()
{
int k=-12345;
char str[30];
printf("ÊäÈëÒ»¸öÕûÐÍÊý: ");
scanf("%d",&k);
itoa(k,str);//µ÷ÓÃ×ª»»º¯Êý
printf("×ª»»ºóµÄ×Ö·û´®:%s\n",str);
return 0;
}
//{{MAIN}}
//{{FUNC}}
int itoa(int i, char s[])//i±»×ª»»µÄÕûÐÍÊý,s×ª»»ºó´æ·ÅµØÖ·
{
char buf[30];
char *p=buf+29;
int flag=0;
int len=0;
if(i<0)
{
flag=-1;
i=-i;
}
//·´Ïò´æ·Å×ª»»µÄASCIIÂë
while(i>0)
{
*p=i%10+'0';
i/=10;
p--;
}
if(flag<0)
*p='-',p--;
//ÕýÏò¸´ÖÆµ½s¿ªÊ¼µÄµØÖ·ÄÚ´æÖÐ
for(p++ ; p<buf+30;len++,p++,s++)
*s=*p;
*s='\0';
return len;
}
//{{FUNC}}
