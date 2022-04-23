#include <stdio.h>
void main()
{
    int number[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}, hang[4] = {0, 0, 0, 0}, lie[4] = {0, 0, 0, 0}, zz[4][4];
    int i, j, sum_around = 0, s = 0;
    int max[4] = {0, 0, 0}, min[4] = {0, 0, 0}; //记最大值最小值及其位置
    printf("输入4x4矩阵:\n");
    for (i = 0; i < 4; i++)
        /*BLANK*/ for (j = 0; j < 4; j++)
            scanf("%d", &number[i][j]);
    /*BLANK*/
    //找出最大值和最小值和位置
    max[0] = min[0] = number[0][0];
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            // 求最大和最小数存在的行列
            if (number[i][j] > max[0])
            {
                /*BLANK*/
                max[0] = number[i][j];
                max[1] = i;
                max[2] = j;
                /*BLANK*/
            }
            if (number[i][j] < min[0])
            {
                /*BLANK*/
                min[0] = number[i][j];
                min[1] = i;
                min[2] = j;
                /*BLANK*/
            }
            //求对角线和
            if (i == j)
                s = s + number[i][j];
            //求外围所有数的和
            if ((i == 0) || (j == 0) || (i == 3) || (j == 3))
                /*BLANK*/ sum_around += number[i][j]; /*BLANK*/
            //求每行每列之和
            hang[i] += number[i][j];
            lie[i] += number[j][i];
            //求转置矩阵
            zz[j][i] = number[i][j];
        }
    }
    printf("The max is %d(%d,%d)\n", max[0], max[1], max[2]);
    printf("The min is %d(%d,%d)\n", min[0], min[1], min[2]);
    printf("The sum of 对角线=%d\n", s);
    for (i = 0; i < 4; i++)
        printf("第%d行和=%d\t", i, hang[i]);
    putchar('\n');
    for (j = 0; j < 4; j++)
        printf("第%d列和=%d\t", j, lie[j]);
    printf("\n转置后矩阵:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%4d", zz[i][j]);
        putchar('\n');
    }
    printf("外围和=%d\n", sum_around);
}
