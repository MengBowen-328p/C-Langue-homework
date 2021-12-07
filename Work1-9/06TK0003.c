#include <stdio.h>
struct abc
{
int a; 
float b; 
char *c; 
};
int main(void)
{
struct abc x = {23,98.5,"wang"};
struct abc *px = &x;
printf("%d, %s, %.1f, %s\n", x.a, x.c,/*BLANK*/px->b,px->c/*BLANK*/);
return 0;
}