#include <stdio.h>
#define price 2.0
int main()
{
	double wait_time,s,money;
	
	scanf("%lf,%lf",&s,&wait_time);
	if(s<=3)
    {
		money=10;
    }
	else if(s<=10)
    {
		money=10+price*(s-3);
    }
	else
    {
		money=10+price*(s-3)+0.5*price*(s-10);
    }
	if(wait_time>=5)
    {
		money+=((int)(wait_time/5))*2.0;
    }
	printf("里程数:%.2f\n车费:%.0f\n",s,money);
    return 0;
}
