#include <stdio.h>
int main()
{
	int a,b,c,d,e,grade,n,i;
	double sum=0;
	scanf("%d",&n);
	a=b=c=d=e=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&grade);
		sum+=grade;
		if(grade>=90)
			{
            a++;
            }
		else if(grade>=80)
			{
            b++;
            }
		else if(grade>=70)
			{
            c++;
            }
		else if(grade>=60)
			{
            d++;
            }
		else
			{
            e++;
            }
	}
	printf("平均成绩:%.2lf\n",sum/n);
	printf("A(90 ~ 100): %d\n",a);
	printf("B(80 ~ 89): %d\n",b);
	printf("C(70 ~ 79): %d\n",c);
	printf("D(60 ~ 69): %d\n",d);
	printf("E(0 ~ 59): %d\n",e);
    return 0;
}
