#include "stdio.h"
void main()
{
	char str[2][80];
	int i,c;
	printf("Input str1:");
	gets(str[0]);
	printf("Input str2:");
	gets(str[1]);
	for(c=0;str[0][c]!='\0';c++)
		;
	for(i=0;str[1][i]!='\0';i++)
		str[0][c+i]=str[1][i];
	str[0][c+i]='\0';
	printf("\nstr1 is %s\n",str[0]);
	printf("str2 is %s\n\n",str[1]);
}
