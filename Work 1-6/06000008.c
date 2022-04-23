#include <stdio.h>
#include <string.h>
#define N 3
int main()
{
	char text[N][80];
	int i,max;
	printf("Enter %d strings:\n", N);
	for (i = 0; i < N; i++)
	{
		gets(text[i]);
		if (i == 0)
			max=0;
		else if(strcmp(text[i], text[max]) > 0)
			max =i;
	}
	printf("\n最大字符串是: %s\n", text[max]);
	return 0;
}