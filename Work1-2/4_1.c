#include <stdio.h>
int main() 
{
	int ch_count = 0, sp_count = 0, num_count = 0, other_count = 0;
	char ch;
	while ((ch = getchar()) != '\n')
	{
		if ((ch >= 'A' && ch <= 'Z') ||(ch>='a'&&ch<='z')) 
			ch_count++;
		else if (ch==' ') 
			sp_count++;
		else if (ch>='0'&&ch<='9')
			num_count++;
		else 
			other_count++;
	}
	
	printf("characters=%d\n", ch_count);
	printf("spaces=%d\n", sp_count);
	printf("numbers=%d\n", num_count);
	printf("others=%d\n", other_count);
	return 0;
}