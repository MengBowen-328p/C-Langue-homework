#include <stdio.h>
struct s1
{
char c1, c2; 
int n; 
};
struct s2
{ 
int n; 
struct s1 m; 
};
int main(void)
{
struct s2 m= {1, {'A', 'B', 2} };
printf(/*BLANK*/"%d,%d,%c,%c\n"/*BLANK*/, m.n, m.m.n, m.m.c1, m.m.c2);
return 0;
}
