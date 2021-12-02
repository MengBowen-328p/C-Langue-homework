#include <stdio.h>
int fun();
int argc=0;
char* argv[]={"exam.exe","Param1  Param2  Param3"};
int main()
{
int i=0,fgi=0;
while(argv[1][i]!='\0')
{
if(argv[1][i]==' ' && argv[1][i+1]!=' ')//²»ÄÜÁ¬Ðø2¸ö¿Õ¸ñ
{
argc=fun();
fgi=i;
}
i++;
}
if(/*BLANK*/i>fgi/*BLANK*/)//Èç¹ûi´óÓÚfgiÉÏ´Î¿Õ¸ñÎ»ÖÃËµÃ÷»¹ÓÐ²ÎÊýÏî
argc=fun();
printf("Run %s Params is %d\n",argv[0], argc);
return 0;
}
int fun()
{
static int s=0;
s+=1;
return s;
}
