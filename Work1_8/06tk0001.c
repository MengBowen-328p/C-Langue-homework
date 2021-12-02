/*BLANK*/#include <stdio.h>/*BLANK*/
int main()
{
int x=1,y=2;
int func(int* a,int *b);//º¯ÊýÔ­ÐÍËµÃ÷
y=func(&x,&y);//µ÷ÓÃfunc£¬½«±äÁ¿x,yµÄµØÖ·´«¸øfuncµÄa,b
x=func(&x,&y);
printf("%d,%d\n",x,y);
return 0;
}
int func (int *a, int *b)
{
if(*a>*b)//aÄÚ´æµÄÖµ>bÄÚ´æµÄÖµ
*a-=*b;//aÄÚ´æµÄÖµ-bÄÚ´æµÄÖµ½á¹û·ÅaÄÚ´æ
else
(*a)--;//aÄÚ´æµÄÖµ×Ô¼õ1
return /*BLANK*/(*a+*b)/*BLANK*/;//·µ»ØaÄÚ´æÖµ+bÄÚ´æÖµµÄºÍ
}
