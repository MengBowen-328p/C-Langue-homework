#include <stdio.h>
int main()
{
	int i,flag=1,c=0;//i循环变量,flag符号标识,c循环计数器
	double sum=0,m,z,x;//sum累加值,m分母,z分子,x输入角度
	printf("输入角度:");
	scanf("%lf",&x); 
	x=3.1415926*x/180.0; //角度转换为弧度
	z=x;
	m=1.0;
	for(i=1 ; ; i+=2)
	{
		c++;
		sum=sum+flag*z/m;//计算项的累计和
		if(z/m < 1.0e-6)//判断精度
			break;
		z=z*x*x;//下项的分子
		m=m*(i+1)*(i+2);//下项的阶乘值
		flag*=-1;//下项的符号
	}
	printf("count=%d\nsin(%f)=%f\n",c,x,sum);
	return 0;
}
