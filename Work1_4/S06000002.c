#include <stdio.h>
#include <math.h>
int main()
{
int x,flag=1;
//printf("������һ��5λ����:");
scanf("%d",&x);
if(fabs(x)>99999||fabs(x)<10000)
printf("����5λ����\n");
if(x<0)//�жϸ���
{
flag=-1;
x*=-1;//��Ϊ����
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
