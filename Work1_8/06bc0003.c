//{{MAIN}}
#include <stdio.h>
void InputData(double* pData,int n);
void MinMaxPosChange(double* pData,int n);
void Output(double *pData,int n);
int main()
{
double ds[10];
InputData(ds,10);
MinMaxPosChange(ds,10);
Output(ds,10);
return 0;
}
//{{MAIN}}
//{{FUNC}}
void InputData(double* pData,int n)//ÊäÈëº¯Êý
{
for(;n>0;n--,pData++)
scanf("%lf",pData);
}
//{{FUNC}}
//{{FUNC}}
void MinMaxPosChange(double* pData,int n)//Êý¾Ý´¦Àíº¯Êý
{
double* pMin,*pMax,*pn,dtmp;
int i=0;
pMin=pMax=pData;
//É¨ÃèËùÓÐÊý¾Ý£¬¼Ç×îÐ¡ÖµºÍ×î´óÖµµÄµØÖ·
for(pn=pData;i<n;i++,pn++)
{
if(*pn<*pMin)
pMin=pn;
else if(*pn>*pMax)
pMax=pn;
}
//´¦Àí×îÐ¡ÖµÓëµÚ1¸ö½»»»
dtmp=*pData;
*pData=*pMin;
*pMin=dtmp;
//´¦Àí×î´óÖµ
dtmp=*pMax;
*pMax=*(pData+n-1);
pData[n-1]=dtmp;
}
//{{FUNC}}
//{{FUNC}}
void Output(double *pData,int n)//Êä³öº¯Êý
{
for(;n>0;n--,pData++)
printf("%8.2f",*pData);
printf("\n");
}
//{{FUNC}}
