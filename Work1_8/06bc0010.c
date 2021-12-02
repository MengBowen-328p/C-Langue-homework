#include <stdio.h>
int main()
{
    int sorts[100] = {0};
    int i = 0, ys, ns;
    int *p;
    printf("输入队列人数(<100): ");
    scanf("%d", &ns);
    for (p = sorts, i = 1; p < sorts + ns; p++, i++)    //各位预置1
        *p = i;
    p = sorts;  //指针指向开始的位置
    ys = ns;    //剩余人数
    i = 0;
    while (ys > 1)//当还有剩余人数时进行循环
    {
        if (*p != -1)
        {
            i++;
            if (i == 6)
            {
                *p = -1; //此时判定为被退出游戏
                ys--;
                i = 0;
            }
        }
        p++;
        if (p > sorts + ns - 1) //当指针再次指向开始位时
            p = sorts;
    }
    p = sorts;
    for (p = sorts, i = 1; p < sorts + ns; p++, i++)
    {
        if (*p != -1)//当出现最终留在游戏中的人时
        {
            printf("最后留下的是原来的 %d 号\n", i);
            break;
        }
    }
    printf("\n");
    return 0;
}
