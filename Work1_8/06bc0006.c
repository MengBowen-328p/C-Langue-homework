
#include <stdio.h>
void FindDataRote(double *p, int n, double *pMaxest, double *pMax);
int main()
{
    double dds[10] = {1, 2, 3, 4, 5};
    double Max, Max2;
    double *p;
    int n;
    printf("ÊäÈën(n<=10)ÊµÐÍÊý¸öÊý: ");
    scanf("%d", &n);
    for (p = dds; p < dds + n; p++)
        scanf("%lf", p);
    FindDataRote(dds, n, &Max, &Max2);
    printf("Maxest is %f\n Max is %f\n", Max, Max2);
    return 0;
}
void FindDataRote(double *p, int n, double *pMaxest, double *pMax) //将数据从大到小排成一列，最大的数放在数组第一个元素，次大的数在第二个元素
{
    double *p1 = p, *p2, tmp;
    for (p1 = p; p1 < p + n - 1; p1++)
    {
        for (p2 = p1 + 1; p2 < p + n; p2++)
        {
            if (*p1 < *p2)
            {
                tmp = *p1;
                *p1 = *p2;
                *p2 = tmp;
            }
        }
    }
    *pMaxest = *p;    //最大数
    *pMax = *(p + 1); //次大数为最大数往后偏移一个数据位
}
