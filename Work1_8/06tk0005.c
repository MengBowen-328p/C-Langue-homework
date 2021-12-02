#include <stdio.h>
void insert(double a[], int *n, double x, int i) //定义函数insert()
{
    int j; //定义变量j
    if (i < *n - 1)
        for (j = *n - 1; j >= i; j--) //在下标为i的元素前插入x
            a[j + 1] = a[j];
    else
        i = *n;
    a[i] = x;
    (*n)++; //将x插入末尾，并且元素数量加一
}
int main(void)
{
    double ds[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int ns = 10, i;
    insert(ds, &ns, 80, 3);      //调用insert函数
    for (i = 0; i < ns; i++)     //历遍数组中的每一个元素
        printf("%.2f\t", ds[i]); //打印历遍的每一个元素
    printf("\n");
}
