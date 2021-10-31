#include <stdio.h>
int main()
{
	int i;
	double z=2.0,m=1.0,sum=0.0,tmp;
	for(i=0;i<20;i++)
	{
		sum+=z/m;	//当前项值累加
		tmp=z;	//把分子暂存
		z=z+m;	//下一项分子
		m=tmp;	//下一项的分母(原分子变分母)
	}
	printf("前20项和%f\n",sum);
	return 0;
}