#include <stdio.h>
int main()
{
	int s,count=0,Items;	//��ֵ�������������
	int i, j;	//ѭ������
	scanf("%d",&Items);	//��������
	for (i = 1,s=1; count<Items; s = 1, i++)//����i��1��ʼ
	{
		printf("%d ",s);//ÿ�еĵ�һ��1
		count++;
		for (j = 1; j < i && count<Items ; j++)//��λ��j�ƹ���һ��ֱ�ӿ�ʼѭ��
		{
			s = (i - j) * s/j;//ͨ�ʽ,s-ǰ��ֵ
			printf("%d ", s);
			count++;//��������
		}
		printf("\n");
		if(count>=Items)
			break;
	}
	return 0;
}
