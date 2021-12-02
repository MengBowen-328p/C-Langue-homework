#include <stdio.h>
#include <string.h>
int cq_strcmp(char *p1, char *p2);
int main()
{
    char str1[50];
    char str2[50];
    int delta;
    printf("分别输入两个字符串:\n");
    gets(str1);
    gets(str2);
    delta = cq_strcmp(str1, str2);
    printf("字符串比较结果:\n");
    if (delta > 0)
        printf("%s > %s\n", str1, str2);
    else if (delta < 0)
        printf("%s < %s\n", str1, str2);
    else
        printf("%s = %s\n", str1, str2);
    return 0;
}
int cq_strcmp(char *p1, char *p2)
{
    int delta = 0;
    while (*p1 != '\0' && *p2 != '\0' && delta == 0)
    {
        delta = *p1 - *p2;
        p1++;
        p2++;
    }               //对两字符串取同一位进行做差，结果赋给delta
    if (delta == 0) //当delta==0时证明两字符串每一位都相等且长度也相等
    {
        if (*p2 != '\0')
            return -1;
        else if (*p1 != '\0')
            return 1;
    }
    return delta;
}