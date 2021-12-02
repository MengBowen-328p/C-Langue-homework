//{{MAIN}}
#include <stdio.h>
int Insert( int a[], int size,int i, int k);
int main()
{
int ds[10]={1,2,3,4,5};
int len=0;
int i,ins=0;
int *p=ds;
char c;
printf("ÊäÈëÔªËØ(<9)¸ö:");
do
{
scanf("%d%c",p,&c);
len++;
if(c=='\n')
break;
p++;
}while(1);
printf("²åÈëÎ»ÖÃºÍ±»²åÊý:");
scanf("%d%d",&i,&ins);
Insert(ds,len,i,ins);
for(p=ds; p<ds+len+1;p++)
printf("%6d",*p);
printf("\n");
return 0;
}
//{{MAIN}}
//{{FUNC}}
int Insert( int a[], int size,int i, int k)//aµØÖ·,sizeÔ­Êý¾Ý¸öÊý,i²åÈëÎ»ÖÃ,k±»²åÊý
{
int fr=0;
if(i>=size)
a[size]=k;
else
{
//´Ói-1Î»ÖÃ¿ªÊ¼£¬Ô­À´ÔªËØÖµºóÒÆ
for(fr=size;fr>=i; fr--)
a[fr]=a[fr-1];
a[fr]=k;
}
return 0;
}
//{{FUNC}}
