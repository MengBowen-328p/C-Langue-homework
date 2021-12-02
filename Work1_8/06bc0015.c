#include <stdio.h>
int add(int x,int y);
int mul(int x,int y);
void main()
{
int a=10,b=20,result1,result2;
int (*pFun)(int,int);//¶¨Òåº¯ÊýÖ¸Õë,´ËÖ¸ÕëÓÃÓÚÖ¸Ïòº¯ÊýÀàÐÍ¡¢ÐÎÊ½²ÎÊýÏàÍ¬µÄº¯Êý
//ÓÃº¯ÊýÖ¸Õëµ÷ÓÃaddº¯Êý
/*BLANK*/pFun=add/*BLANK*/;
result1=(*pFun)(a,b);
//ÓÃº¯ÊýÖ¸Õëµ÷ÓÃmulº¯Êý
/*BLANK*/pFun=mul/*BLANK*/;
result2=(*pFun)(a,b);
printf("%d+%d=%d\n%d*%d=%d\n",a,b,result1,a,b,result2);
}
int add(int x,int y)
{
return x+y;
}
int mul(int x,int y)
{
return x*y;
}
