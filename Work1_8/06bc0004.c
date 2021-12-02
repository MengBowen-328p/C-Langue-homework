//{{MAIN}}
#include <stdio.h>
int main()
{
void ChangePos(double*,int);
double ds[20],*pStart=NULL;
int n,i;
printf("ÊäÈëÊý¾Ý¸öÊý");
scanf("%d",&n);
//ÊäÈën¸öÊý¾Ý
for(pStart=ds+19 , i=0 ; i<n ; pStart-- , i++)
scanf("%lf",pStart);
ChangePos(ds,20);//µ÷ÓÃº¯ÊýÍê³ÉÔªËØÖµ»»Î»
for(i=0; i<n; i++)//ÊäÈë³ön¸öÊý¾Ý
printf("%8.2f",ds[i]);
printf("\n");
return 0;
}
//{{MAIN}}
//{{FUNC}}
void ChangePos(double *pData,int ds)
{
double *pEndpos=pData+ds-1;//×îºóÒ»¸öÔªËØµÄÖ¸Õë
while(pData<pEndpos)
{
double t=*pData;
*pData=*pEndpos;
*pEndpos=t;
pData++;
pEndpos--;
}
}
//{{FUNC}}
