#include <stdio.h>
int main()
{
	long int x,i,j;
	//printf("pls input x:");
	scanf("%d",&x);//û���ж�x�ĺϷ���
	for(i=1;i<=x/2;i++)
	{
		for(j=i+1;j<=x/2+1;j++)
		{
			if((i+j)*(j-i+1)/2==x)//�ɵȲ����к͹�ʽ�õ����ж�����
			{
				printf("%d+...+%d=%d\n",i,j,x);
				break;
			}
		}
	}
	return 0;
}
