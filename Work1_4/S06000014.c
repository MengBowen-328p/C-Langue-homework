#include <stdio.h>
int main()
{
	int big_horse,mid_horse,small_horse,count=0;
	for(big_horse=1;big_horse<=100/3;big_horse++)
	{
		for(mid_horse=1;mid_horse<=100/2;mid_horse++)
		{
			small_horse=100-big_horse-mid_horse;
			if(small_horse*3+mid_horse*2+small_horse/2==100 && small_horse%2==0)
			{
				count++;
				printf("���� %d, ���� %d, С�� %d\n",big_horse,mid_horse,small_horse);
			}
		}
	}
	printf("�������ģʽ: %d\n",count);
	return 0;
}
