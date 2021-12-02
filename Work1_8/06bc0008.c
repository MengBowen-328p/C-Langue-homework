//{{MAIN}}
#include <stdio.h>
void strcpyTo(char *p1, char* p2,int m);
int main()
{
char str1[100]="1234";
char str2[50]="5678";
int n;
printf("ÊäÈë×Ö·û´®\n");
gets(str1);
printf("¿ªÊ¼Î»ÖÃ:");
scanf("%d",&n);
strcpyTo(str2, str1,n);
printf("ÐÂ×Ö·û´®Îª:%s\n",str2);
return 0;
}
//{{MAIN}}
//{{FUNC}}
void strcpyTo(char* p2,char *p1, int m)
{
int i=0;
while(*p1!='\0' && i<m-1)
i++,p1++;
while(*p1!='\0')
{
*p2=*p1;
p1++;
p2++;
}
*p2='\0';
}
//{{FUNC}}
