#include <stdio.h>
int add(int x, int y);
int mul(int x, int y);
void main()
{
    int a = 10, b = 20, result1, result2;
    int (*pFun)(int, int); //定义函数指针,此指针用于指向函数类型、形式参数相同的函数
    pFun = add;            //用函数指针调用add函数
    result1 = (*pFun)(a, b);
    pFun = mul; //用函数指针调用mul函数
    result2 = (*pFun)(a, b);
    printf("%d+%d=%d\n%d*%d=%d\n", a, b, result1, a, b, result2);
}
int add(int x, int y)
{
    return x + y;
}
int mul(int x, int y)
{
    return x * y;
}
