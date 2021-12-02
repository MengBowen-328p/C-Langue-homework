#include <stdio.h>
int main()
{
int s[6][6],i,j;
//ÒÔÏÂË«ÖØÑ­»·ÖÐiÎªÐÐÏÂ±êºÅ,jÎªÁÐÏÂ±êºÅ
for(i=0;i<6;i++)
for(j=0;j<6;j++)
*(*(s+i)+j)=i-j;//s+iÎªÐÐµØÖ·,*(s+i)ÎªÐÐÄÚÁÐµÄÆðÊ¼µØÖ·
for(j=0;j<6;j++)
{
for(i=0;i<6;i++)
printf("%4d",/*BLANK*/*(*(s+i)+j)/*BLANK*/);//Êä³öiÐÐ,jÁÐÔªËØÖµ
printf("\n");
}
return 0;
}
