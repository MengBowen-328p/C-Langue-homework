#include <stdio.h>
void ArrayRote(double *p, int n);
int main()
{
    double ds[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, *p;
    int i, j;
    printf("input:\n");
    p = &ds[0][0];
    for (i = 0; i < 3 * 3; i++, p++)
        scanf("%lf", p);
    ArrayRote((double *)ds, 3);
    printf("After:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%f\t", ds[i][j]);
        printf("\n");
    }
    return 0;
}
void ArrayRote(double *p, int n) //通过指针操作行偏移和列偏移实现矩阵转置
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            double t;
            t = *(p + i * n + j);
            *(p + i * n + j) = *(p + n * j + i);
            *(p + n * j + i) = t;
        }
    }
}