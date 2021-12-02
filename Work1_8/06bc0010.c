#include <stdio.h>
int main()
{
int sorts[100]={0};
int i=0,ys,ns;
int *p;
printf("ÊäÈë¶ÓÁÐÈËÊý(<100): ");
scanf("%d",&ns);
//¸÷Î»Ô¤ÖÃ1
for(p=sorts,i=1; p<sorts+ns; p++,i++)
*p=i;
p=sorts;//Ö¸ÕëÖ¸Ïò¿ªÊ¼
ys=ns;//Ê£ÓàÈËÊý
i=0;
while(ys>1)//ysÊ£ÓàÈËÊý
{
if(*p!=-1)
{
i++;
if(i==6)
{
*p=-1;//ÍË³ö
ys--;
i=0;
}
}
p++;
if(p>sorts+ns-1)//Ö¸ÕëÖ¸Ïò¿ªÊ¼
p=sorts;
}
p=sorts;
for(p=sorts,i=1;p<sorts+ns;p++,i++)
{
if(*p!=-1)
{
printf("×îºóÁôÏÂµÄÊÇÔ­À´µÄ %d ºÅ.\n",i);
break;
}
}
printf("\n");
return 0;
}
