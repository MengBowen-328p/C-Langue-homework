#include <stdio.h>
int main()  //定义主函数main()
{
int x=1,y=2;
int func(int* a,int *b);    //函数func()声明
y=func(&x,&y);  //调用函数fun()，将x,y地址传至func()形参a,b
x=func(&x,&y);  //调用函数fun()，将x,y地址传至func()形参a,b
printf("%d,%d\n",x,y);  //以十进制形式输出x,y的值
return 0;
}
int func (int *a, int *b)   //定义函数func()
{
if(*a>*b)   //若a的地址大于b的地址
*a-=*b; //将a与b的地址做差后赋给*a
else    //或者
(*a)--;     //a的内存值自减1
return (*a+*b);     //返回a和b的内存值的和
}
