#include <stdio.h>
#include <string.h>
void StringArraySort(char (*pstr)[100],int size);
int main()
{
char InputStr[100]="A123X456_17960?302tab5876z1",*p;
int Ints[100],*pi,i,bs=0;//bs×÷Îª±êÊ¶Ê¹ÓÃ
int value=0;
printf("ÊäÈë´øÊý×Ö²¢·ÇÁ¬ÐøµÄ×Ö·û:\n");
gets(InputStr);
for(i=0,p=InputStr; *p!='\0'; p++)
{
if(*p>='0' && *p<='9')
{
value=value*10+(*p-'0');
bs=1;//¿ªÊ¼×ª»»
}
else 
{
if(bs)
{
Ints[i++]=value;
value=0;
bs=0;//ÎÞ×ª»»
}
}
}
//Èç¹û×îºóÒ»¸ö×Ö·ûÈÔÎªÊý×ÖÔòÐèÒª´¦Àí
if(value!=0)
Ints[i++]=value;
printf("»ñÈ¡ %d ¸öÕûÐÍÊý:\n",i);
for(pi=Ints; pi<Ints+i;pi++)
printf("%8d",*pi);
printf("\n");
return 0;
}
