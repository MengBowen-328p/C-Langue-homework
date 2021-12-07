#include <stdio.h>
#include <string.h>
struct student
{ 
int num;
char name[20];
int score; 
};
struct student stud[10];
int main(void)
{
int i , sum = 0 ;
for(i = 0; i < 2; i++)
{
scanf("%d%s%d", &stud[i].num,/*BLANK*/&stud[i].name/*BLANK*/, &stud[i].score);
sum += stud[i].score;
}
printf("aver = %d \n", sum/2);
return 0;
}
