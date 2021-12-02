#include <stdio.h>
int fun();  //对函数fun()进行全局声明
int argc = 0;   //定义整形变量argc，并赋初值0
char *argv[] = {"exam.exe", "Param1  Param2  Param3"};  //定义一个指针数组argv[],并存入四个元素
int main()  //定义主函数main()
{
    int i = 0, fgi = 0; //定义整型变量i,fgi并赋初值0
    while (argv[1][i] != '\0')  //当argv[][]数组中未出现字符串末尾标识符时
    {
        if (argv[1][i] == ' ' && argv[1][i + 1] != ' ') //当出现两个连续空格时
        {
            argc = fun();   //调用fun()函数
            fgi = i;    //将i的值赋给fgi
        }
        i++;    //i自加,开始判断下一个字符
    }
    if (i > fgi)    //若i的值大于fgi时
        argc = fun();   //调用函数fun()
    printf("Run %s Params is %d\n", argv[0], argc); //打印*avgr[]中以第二个字符串的以空格分隔的项数
    return 0;
}
int fun()
{
    static int s = 0;   //定义静态变量s，并赋值为0
    s += 1; //s自加1
    return s;   //函数调用后返回s的值
}
