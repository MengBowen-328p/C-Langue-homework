#include <stdio.h>
#define RS 3
#define WS 3
#define BS 6
#define EQU 8
int main()
{
	int r,w,b,count=0;
	for(b=0;b<=BS;b++)//����ȡ����Χ
	{
		for(r=0;r<=RS;r++)//����ȡ����Χ
		{
			for(w=0;w<=WS;w++)//����ȡ����Χ
				if(w+r+b==EQU)
					count++;
		}
	}
	printf("�Ϸ�Ҫ��Ĵ�����%d\n",count);
	return 0;
}
