#include <stdio.h>
int main()
{
	int i,flag=1,c=0;//iѭ������,flag���ű�ʶ,cѭ��������
	double sum=0,m,z,x;//sum�ۼ�ֵ,m��ĸ,z����,x����Ƕ�
	printf("����Ƕ�:");
	scanf("%lf",&x); 
	x=3.1415926*x/180.0; //�Ƕ�ת��Ϊ����
	z=x;
	m=1.0;
	for(i=1 ; ; i+=2)
	{
		c++;
		sum=sum+flag*z/m;//��������ۼƺ�
		if(z/m < 1.0e-6)//�жϾ���
			break;
		z=z*x*x;//����ķ���
		m=m*(i+1)*(i+2);//����Ľ׳�ֵ
		flag*=-1;//����ķ���
	}
	printf("count=%d\nsin(%f)=%f\n",c,x,sum);
	return 0;
}
