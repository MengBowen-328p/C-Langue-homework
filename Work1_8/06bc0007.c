//{{MAIN}}
#include <stdio.h>
void cq_strcat(char *p1, char* p2,int n);
int main()
{
char str1[100]="1234";
char str2[50]="5678";
int n;
printf("ÊäÈëÁ½¸ö×Ö·û´®\n");
gets(str1);
gets(str2);
printf("È¡µÚ2¸ö×Ö·û´®µÄ×Ö·ûÊý:");
scanf("%d",&n);
cq_strcat(str1,str2, n);
printf("%s\n",str1);
return 0;
}
//{{MAIN}}
//{{FUNC}}
void cq_strcat(char* p2,char *p1, int n)
{
while(*p2!='\0')
p2++;
while(*p1!='\0' && n>0)
{
*p2=*p1;
p1++;
p2++;
n--;
}
*p2='\0';
}
//{{FUNC}}
