#include <stdio.h>
#include <math.h>
int main()
{
int x,flag=1;
//printf("请输入一个5位整数:");
scanf("%d",&x);
if(fabs(x)>99999||fabs(x)<10000)
printf("不是5位整数\n");
if(x<0)//判断负数
{
flag=-1;
x*=-1;//变为正数
}
if(flag<0)
printf("-");
do
{
printf("%d",x%10);
x/=10;
}while(x>0);
putchar('');
return 0;
}
