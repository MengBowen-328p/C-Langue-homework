#include <stdio.h>
int main()
{
	double max_speed,car_speed,money=0.0;
	scanf("%lf%lf",&car_speed,&max_speed);
	if((car_speed-max_speed)/max_speed>.10 && (car_speed-max_speed)/max_speed<=0.5)
        {
            money=200.0;
            printf("处罚%.0f\n",money);
        }
	else if((car_speed-max_speed)/max_speed>0.5)
		{
        printf("吊销驾驶证\n");
        }
	/*
    if(money<0)
        {
		printf("吊销驾驶证\n");
        }
	else
        {
		printf("处罚%.0f\n",money);
        }
    */
	return 0;
}