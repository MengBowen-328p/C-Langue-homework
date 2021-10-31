#include <stdio.h>
#define RS 3
#define WS 3
#define BS 6
#define EQU 8
int main()
{
	int r,w,b,count=0;
	for(b=0;b<=BS;b++)//黑球取数范围
	{
		for(r=0;r<=RS;r++)//红球取数范围
		{
			for(w=0;w<=WS;w++)//白球取数范围
				if(w+r+b==EQU)
					count++;
		}
	}
	printf("合符要求的搭配数%d\n",count);
	return 0;
}
