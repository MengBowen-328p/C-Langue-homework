#include <stdio.h>
void find(int *, int, int *, int *);    //全局声明函数find()
int main(void)  //定义主函数main()
{
    int max, min, a[] = {5, 3, 7, 9, 2, 0, 4, 1, 6, 8}; //定义变量max,min和数组a[]并为其填入元素
    find(a, 10, &max, &min);    //调用find()函数
    printf("%d,%d\n", max, min);    //打印max和min的值
    return 0;
}
void find(int *a, int n, int *max, int *min)    //定义函数find()
{
    int i;  //定义循环变量i
    *max = *min = 0;        //将*max和*min的初值归零
    for (i = 1; i < n; i++) //当i<n时，i自加(历遍数组a[]中的每一个元素)
    {
        if (a[i] > a[*max]) //当a[i]大于目前最大的元素a[*max]时
            *max = i;   //将i的地址赋给*max
        if (a[i] < a[*min]) //当a[i]小于目前最大的元素a[*min]时
            *min = i;   //将i的地址赋给*min
    }
}
