#include <stdio.h>
int main()
{
	int meter_19,meter_23,min=133,finalmeter_19,finalmeter_23,t;
	for(meter_19=1;meter_19<=133/19+1;meter_19++)//19米的
	{
		for(meter_23=1;meter_23<=133/23+1;meter_23++)//23米的
		{
			t=133-meter_19*19-meter_23*23;//剩余长度
			if(t<min && t>=0)
			{
				min=t;
				finalmeter_19=meter_19;
				finalmeter_23=meter_23;
			}
		}
	}
	printf("19米段数:%d\n23米段数:%d\n余段长度:%d\n",finalmeter_19,finalmeter_23,min);
	return 0;
}
