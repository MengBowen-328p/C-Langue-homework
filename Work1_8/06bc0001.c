#include <stdio.h>
#include <string.h> //调用string.头文件
int main()
{
    char strs[5][100] = {0};
    char(*p)[100], (*pp)[100];
    int i;
    printf("输入5个字符串\n");
    for (i = 0; i < 5; i++)
        gets(strs[i]); //接收5个字符串
    for (p = strs; p < strs + 4; p++)
    {
        for (pp = p + 1; pp < strs + 5; pp++) //历遍数组中的每一个字符串
        {
            if (strcmp(*p, *pp) < 0) //如果两个字符串前一个小后一个大
            {
                char tmp[100];
                strcpy(tmp, *p);
                strcpy(*p, *pp);
                strcpy(*pp, tmp); //通过换址的方式交换两个字符串
            }
        }
    }
    printf("\n排序后:\n");
    for (p = strs; p < strs + 5; p++) //历遍每一个字符串
        printf("%s\n", *p);           //打印输出所历遍的每一个字符串
    printf("\n");
    return 0;
}
