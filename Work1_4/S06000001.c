#include <stdio.h>
#define S ' '
int main()
{
	int n,i,j;
	printf("Enter n:");
	scanf("%d",&n);//û���ж�n�ĺϷ���
	for(i=1;i<=n;i++)//��ӡǰn��
	{
		for(j=1;j<=10;j++)//��ӡÿ��ǰ��Ŀո�
			putchar(S) ;
		for(j=1;j<=2*(n-i);j++)//��ӡÿ�ж��еĿո�
			putchar(S) ;
		for(j=1;j<=2*i-1;j++)//��ӡÿ�ж��е�*
			putchar('*') ;
		printf("\n");
	}
	for(i=1;i<=n-1;i++)//��ӡ��n-1��
	{
		for(j=1;j<=10;j++)//��ӡÿ��ǰ��Ŀո�
			putchar(S);
		for(j=1;j<=2*(n-i)-1;j++)//��ӡÿ�ж��е�*
			putchar('*');
		printf("\n");
	}
	return 0;
}
