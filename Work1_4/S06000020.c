#include <stdio.h>
int main()
{
	int day;
	double earn=0;
	double pay=0,total=0;
	for(day=0,pay=0.01,earn=0;day<30;day++)
	{
		total+=pay;
		earn=earn+100000;
		pay=pay*2;
	}
	printf("%d天后富翁:\n得到:%11.2f\n付出:%11.2f\n损失:%11.2f\n", day,earn,total,total-earn);
	return 0;
}