#include <stdio.h>
void insert(double a[ ], int *n, double x, int i)
{
int j;
if (/*BLANK*/i<*n-1/*BLANK*/)
for (j=*n-1; /*BLANK*/j>=i/*BLANK*/; j--)
/*BLANK*/a[j+1]/*BLANK*/ = a[j];
else
i = *n;
a[i]= /*BLANK*/x/*BLANK*/;
(*n)++;
}
int main(void)
{
double ds[20]={1,2,3,4,5,6,7,8,9,10};
int ns=10,i;
insert(ds,&ns,80,3);
for(i=0;i<ns;i++)
printf("%.2f\t",ds[i]);
printf("\n");
}
