#include <stdio.h>
void cq_strcat(char *p1, char *p2, int n);
int main()
{
    char str1[100] = "1234";
    char str2[50] = "5678";
    int n;
    printf("请输入两个字符串\n");
    gets(str1);
    gets(str2);
    printf("取第二个字符串的字符符数:");
    scanf("%d", &n);
    cq_strcat(str1, str2, n);
    printf("%s\n", str1);
    return 0;
}
void cq_strcat(char *p2, char *p1, int n)
{
    while (*p2 != '\0')
        p2++; //跳过字符串末尾标识符
    while (*p1 != '\0' && n > 0)
    {
        *p2 = *p1;
        p1++;
        p2++;
        n--;
    } //将字符串的n位逐个加到另一个字符串上
    *p2 = '\0';
}
