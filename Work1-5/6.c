#include <stdio.h>
int main()
{
	char str1[80],str2[80];
	int i=0;
	gets(str1);
	do
	{
		str2[i]=str1[i];
		if(str1[i]=='\0')
			break;
		i++;
	}while(1);
	printf("\nstr1 is %s\n",str1);
	printf("str2 is %s\n",str2);
    return 0;
}
