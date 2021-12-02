//{{MAIN}}
#include <stdio.h>
#include <string.h>
void StringArraySort(char (*pstr)[100],int size);
int main()
{
char str[10][100]={"Chongqing","Shanghai","Beijing"};
int i;
int size=5;
printf("ÊäÈë%d×Ö·û´®:\n",size);
for(i=0;i<size;i++)
gets(str[i]);
StringArraySort(str,size);
printf("µ÷ÓÃ×Ö·û´®ÅÅÐòº¯Êýºó:\n");
for(i=0;i<size;i++)
printf("%s\n",str[i]);
return 0;
}
//{{MAIN}}
//{{FUNC}}
void StringArraySort(char (*pstr)[100],int size)//
{
char buf[100];
int i,j;
for(i=0;i<size-1;i++)
{
for(j=i+1;j<size;j++)
{
if(strcmp(pstr[i],pstr[j])>0)
{
strcpy(buf,pstr[i]);
strcpy(pstr[i],pstr[j]);
strcpy(pstr[j],buf);
}
}
}
}
//{{FUNC}}
