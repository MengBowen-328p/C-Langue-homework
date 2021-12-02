#include <stdio.h>
int main()  //定义主函数main()
{
    int s[6][6], i, j;      //定义一个二维数组s[]和两个循环变量i,j(i为行号,j为列号)
    for (i = 0; i < 6; i++) //历遍每一行
        for (j = 0; j < 6; j++) //历遍每一列
            *(*(s + i) + j) = i - j;    //s+i为行地址,*(s+i)为行内列的起始地址
    for (j = 0; j < 6; j++) //历遍每一行
    {
        for (i = 0; i < 6; i++) //历遍每一列
            printf("%4d", *(*(s + i) + j)); //输出i行，j列的元素值
        printf("\n");   //换行
    }
    return 0;
}
