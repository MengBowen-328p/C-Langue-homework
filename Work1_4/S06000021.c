#include <stdio.h>
int main()
{
	int i,n;
	printf("pls input n: ");
	scanf("%ld",&n);
	while(n>1)
	{
		for(i=2; ;i++)
		{
			if(n%i==0)
			{
				printf("%d ",i);
				n=n/i;
				break;
			}
		}
	}
	printf("\n");
	return 0;
}
