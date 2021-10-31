#include <stdio.h>
int main()
{
int i,A,B,C,D;
for(i=1000;i<=9999;i++)
{
A=i/1000;//千位数字
B=(i-A*1000)/100;//百位数字
C=(i-A*1000-B*100)/10;//十位数字
D=i-A*1000-B*100-C*10;//个位数字
if(i-(C*100+D*10+C)==A*100+B*10+C)
printf("%6d\n-%5d\n------\n%6d\n",i,(C*100+D*10+C),A*100+B*10+C);
}
return 0;
}
