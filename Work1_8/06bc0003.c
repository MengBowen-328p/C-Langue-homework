#include <stdio.h>
void InputData(double *pData, int n);
void MinMaxPosChange(double *pData, int n);
void Output(double *pData, int n); //全局声明三个函数
int main()
{
    double ds[10];
    InputData(ds, 10);
    MinMaxPosChange(ds, 10);
    Output(ds, 10);
    return 0;
}
void InputData(double *pData, int n)
{
    for (; n > 0; n--, pData++)
        scanf("%lf", pData); //输入数据，并将其存放在数组ds[]中
}
void MinMaxPosChange(double *pData, int n)
{
    double *pMin, *pMax, *pn, dtmp;
    int i = 0;
    pMin = pMax = pData;

    for (pn = pData; i < n; i++, pn++) //历遍数组中的10个数
    {
        if (*pn < *pMin)
            pMin = pn;
        else if (*pn > *pMax)
            pMax = pn;
    } //通过换址来改变两个数的大小关系
    dtmp = *pData;
    *pData = *pMin;
    *pMin = dtmp;
    dtmp = *pMax;
    *pMax = *(pData + n - 1);
    pData[n - 1] = dtmp;
}
void Output(double *pData, int n)
{
    for (; n > 0; n--, pData++)  //历遍数组中的数
        printf("%8.2f", *pData); //依次打印数组中的每一个数
    printf("\n");
}
