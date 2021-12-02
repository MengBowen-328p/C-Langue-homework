
#include <stdio.h>
int main()
{
    void ChangePos(double *, int); //声明函数ChangePos()
    double ds[20], *pStart = NULL; //将指针*pStart归零
    int n, i;
    printf("请输入五个数据");
    scanf("%d", &n);
    for (pStart = ds + 19, i = 0; i < n; pStart--, i++)
        scanf("%lf", pStart);   //接受数据到数组中
    ChangePos(ds, 20);          //调用ChangePos函数对数据进行处理
    for (i = 0; i < n; i++)     //历遍数组中的每一个元素
        printf("%8.2f", ds[i]); //打印数组中的每一个元素
    printf("\n");
    return 0;
}
void ChangePos(double *pData, int ds) //通过指针实现数组内元素颠倒
{
    double *pEndpos = pData + ds - 1;
    while (pData < pEndpos)
    {
        double t = *pData;
        *pData = *pEndpos;
        *pEndpos = t;
        pData++;
        pEndpos--;
    }
}
