#include <stdio.h>
#include <math.h>
int main()
{
	double x1,y1,x2,y2,x3,y3;
	double a,b,c,area=0;
	scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
	a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	b=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	c=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
	if(a+b>c && a+c>b && b+c>a)
	{
		double s;
		s=(a+b+c)/2.0;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("\narea=%.2f\n",area);
		printf("border legnth=%.2f\n",2*s);
	}
	else
    {
		printf("Impossible\n");
    }
	return 0;
}
