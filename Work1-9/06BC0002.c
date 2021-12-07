#include <stdio.h>
typedef struct  _personInfo_
{
char m_Name[30];
int m_Year,m_Month,m_Day;
char m_Phone[12];
char m_Address[50];
}PerInfo; //ÎÞÃû½á¹¹Ìå
void main(void)
{
int i,j,n;
PerInfo Infos[10]={0},Obj;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%s%d%d%d%s%s",Infos[i].m_Name,&Infos[i].m_Year,&Infos[i].m_Month,&Infos[i].m_Day,Infos[i].m_Phone,Infos[i].m_Address);
printf("\n");
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(Infos[i].m_Year+Infos[i].m_Month*0.1+Infos[i].m_Day*0.001 > Infos[j].m_Year+Infos[j].m_Month*0.1+Infos[j].m_Day*0.001)
{
Obj=Infos[i];
Infos[i]=Infos[j];
Infos[j]=Obj;
}
}
}
for(i=0;i<n;i++)
printf("%s %d-%d-%d %s %s\n",Infos[i].m_Name,Infos[i].m_Year,Infos[i].m_Month,Infos[i].m_Day,Infos[i].m_Phone,Infos[i].m_Address);
printf("\n");
}
