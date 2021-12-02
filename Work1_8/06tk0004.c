#include <stdio.h>
void find(int *, int, int *, int *);
int main(void)
{
int max, min, a[]={5,3,7,9,2,0,4,1,6,8};
find(a, 10, &max, &min);
printf("%d,%d\n", max, min);
return 0;
}
void find(int *a, int n, int *max, int *min)
{
int i;
*max=*min=0;
for (i = 1; i < n; i++)
{
if (a[i] > a [*max])
/*BLANK*/*max=i/*BLANK*/;
if (a[i] < a [*min])
/*BLANK*/*min=i/*BLANK*/;
}
}
