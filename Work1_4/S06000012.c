#include <stdio.h>
int main()
{
	int i;
	double z=2.0,m=1.0,sum=0.0,tmp;
	for(i=0;i<20;i++)
	{
		sum+=z/m;	//��ǰ��ֵ�ۼ�
		tmp=z;	//�ѷ����ݴ�
		z=z+m;	//��һ�����
		m=tmp;	//��һ��ķ�ĸ(ԭ���ӱ��ĸ)
	}
	printf("ǰ20���%f\n",sum);
	return 0;
}