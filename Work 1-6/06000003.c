#include <stdio.h>
#include <ctype.h>
int main() 
{
	char text[4][81];
	int i, j, upper = 0, lower = 0, space = 0, digit = 0, other = 0;
	char c;
	printf("请输入4行英文字符,不要输入汉字:\n");
	for (i = 0; i < 4; i++) 
	{
		for (j = 0; j < 80; j++) 
		{
			if((c = getchar()) == '\n')
				break;
			/*BLANK*/text[i][j] = c;/*BLANK*/
		}
		/*BLANK*/text[i][j] = '\0'/*BLANK*/;
	}
	printf("各行字符如下:\n");
	for (i = 0; i < 4; i++) 
	{
		printf("%s\n", text[i]);
		/*BLANK*/for (j = 0; text[i][j]!='\0'; j++) /*BLANK*/
		{
			/*
			if(text[i][j]>='A' && text[i][j]<='Z')
			upper++;
			else if(text[i][j]>='a' && text[i][j]<='z')
			lower++;
			else if(text[i][j]>='0' && text[i][j]<='9')
			digit++;
			else if(text[i][j]>=' ')
			space++;
			else
			other++;
			*/
			if (isupper(text[i][j]))
				upper++;
			else if (islower(text[i][j]))
				lower++;
			else if (isdigit(text[i][j]))
				digit++;
			else if (isspace(text[i][j]))
				space++;
			else 
				other++;
		}
	}
	printf("upper=%d\n", upper);
	printf("lower=%d\n", lower);
	printf("digit=%d\n", digit);
	printf("space=%d\n", space);
	printf("other=%d\n", other);
	return 0;
}
