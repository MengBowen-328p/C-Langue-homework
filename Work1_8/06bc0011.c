#include <stdio.h>
int itoa(int i, char s[]);
int main()
{
    int k = -12345;
    char str[30];
    printf("请输入一个整型数: ");
    scanf("%d", &k);
    itoa(k, str);
    printf("转换后的字符串:%s\n", str);
    return 0;
}
int itoa(int i, char s[])
{
    char buf[30]; //定义一个缓存数组用于暂时存放数据
    char *p = buf + 29;
    int flag = 0;
    int len = 0;
    if (i < 0)
    {
        flag = -1;
        i = -i;
    }
    //i被转换的整型数,s转换后存放地址
    while (i > 0)
    {
        *p = i % 10 + '0';
        i /= 10;
        p--;
    }
    if (flag < 0)
        *p = '-', p--;
    //正向复制到s开始的地址内存中
    for (p++; p < buf + 30; len++, p++, s++)
        *s = *p;
    *s = '\0';
    return len;
}
