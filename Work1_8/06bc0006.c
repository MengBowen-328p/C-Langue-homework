//{{MAIN}}
#include <stdio.h>
void FindDataRote(double *p,int n,double* pMaxest,double* pMax);
int main()
{
double dds[10]={1,2,3,4,5};
double Max,Max2;
double *p;
int n;
printf("ÊäÈën(n<=10)ÊµÐÍÊý¸öÊý: ");
scanf("%d",&n);
//°´Ö¸ÕëÊäÈëÊý¾Ý
for(p=dds;p<dds+n;p++)
scanf("%lf",p);
FindDataRote(dds,n,&Max,&Max2);
printf("Maxest is %f\n Max is %f\n",Max,Max2);
return 0;
}
//{{MAIN}}
//{{FUNC}}
void FindDataRote(double *p,int n,double* pMaxest,double* pMax)//pMaxest-×î´óÊýÌîÐ´µØÖ·,pMax-´Î´óÊýÌîÐ´µØÖ·
{
double* p1=p,*p2,tmp;
//½µÐòÅÅÐò.×îºóÒ»¸öÊýµÄµØÖ·ÊÇp1+n-1
for(p1=p; p1<p+n-1 ; p1++)
{
for(p2=p1+1 ; p2<p+n ;p2++)
{
if(*p1<*p2)
{
tmp=*p1;
*p1=*p2;
*p2=tmp;
}
}
}
*pMaxest=*p;
*pMax=*(p+1);
}
//{{FUNC}}
