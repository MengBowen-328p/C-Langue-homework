#include <stdio.h>
#include <string.h>           //调用string.h头文件
int GetStrLength(char *pstr); //全局声明GetStrLength函数
int main()
{
    char str[100];
    int len = 0;
    gets(str);
    printf("\n调用函数输出:\n");
    len = GetStrLength(str);
    printf("%s的长度是:%d\n", str, len);
    return 0;
}
int GetStrLength(char *pstr)
{
    int size = 0;
    while (*pstr != '\0') //当遇到字符串结尾标识符之前
    {
        size++; //长度+1
        pstr++; //指针向后偏移1数据位
    }
    return size;
}
