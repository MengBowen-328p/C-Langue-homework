#include <stdio.h>
void main()
{
	double score=0,sum=0,min,max;
	int count=0;
	do
	{
		scanf("%lf",&score);
		if(score>=0.0)
		{
			sum+=score;
			if(count==0)
				min=max=score;
			else
			{
				if(score<min)
					min=score;
				if(score>max)
					max=score;
			}
			count++;
		}
	}while(count<7);
	if(count>2)
		printf("���ָ���%d,ƽ����%f\n",count,(sum-max-min)/(count-2));
	else
		printf("���ָ���С��3!��������������!\n");
}