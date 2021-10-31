#include <stdio.h>
int main()
{
	int i;
	i=0;
	do
	{
		if(i%2==1 && i%3==2 && i%5==4 && i%6==5 && i%7==0)
			break;
		i++;
	}while(1);
	printf("最少梯数为:%d\n",i);
	return 0;
}
