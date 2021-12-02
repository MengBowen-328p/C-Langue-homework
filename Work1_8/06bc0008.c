#include <stdio.h>
void strcpyTo(char *p1, char *p2, int m);
int main()
{
    char str1[100] = "1234";
    char str2[50] = "5678";
    int n;
    printf("输入字符串\n");
    gets(str1);
    printf("开始位置:");
    scanf("%d", &n);
    strcpyTo(str2, str1, n);
    printf("新字符串为:%s\n", str2);
    return 0;
}
void strcpyTo(char *p2, char *p1, int m)
{
    int i = 0;
    while (*p1 != '\0' && i < m - 1)
        i++, p1++;
    while (*p1 != '\0')
    {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';
}
