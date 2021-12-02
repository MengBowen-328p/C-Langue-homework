#include <stdio.h>
int Insert(int a[], int size, int i, int k);
int main()
{
    int ds[10] = {1, 2, 3, 4, 5};
    int len = 0;
    int i, ins = 0;
    int *p = ds;
    char c;
    printf("输入元素(<9个):");
    do
    {
        scanf("%d%c", p, &c);
        len++;
        if (c == '\n')
            break;
        p++;
    } while (1);
    printf("插入位置和被插数:");
    scanf("%d%d", &i, &ins);
    Insert(ds, len, i, ins);
    for (p = ds; p < ds + len + 1; p++)
        printf("%6d", *p);
    printf("\n");
    return 0;
}
int Insert(int a[], int size, int i, int k)
{
    int fr = 0;
    if (i >= size)
        a[size] = k;
    else
    {
        for (fr = size; fr >= i; fr--)
            a[fr] = a[fr - 1];
        a[fr] = k;
    }
    return 0;
}
