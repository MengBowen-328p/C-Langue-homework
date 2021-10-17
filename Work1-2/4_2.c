#include <stdio.h>
int main()
{
int a=3,b=4,c=5,u=51274,n=4294967295;
float x=1.2,y=2.4,z=-3.6;
double f,g,h;
char c1='a',c2='b';
printf("a=%d b=%d c=%d\n",a,b,c);
printf("x+y=%1.2f y+z=%1.2f z+x=%1.2f\n",x+y,y+z,x+z);
printf("x=%f, y=%f, z=%f",x,y,z);
printf("u=%d n=%u\n",u,n);
printf("c1='%c' or %d(ASCII)\n",c1,c1);
printf("c2='%c' or %d(ASCII)\n",c2,c2);
return 0;
}