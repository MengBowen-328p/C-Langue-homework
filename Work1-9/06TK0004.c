#include <stdio.h>
struct date
{
int month;
int day;
int year;
};
struct student
{
/*BLANK*/char /*BLANK*/ name[20];
/*BLANK*/int /*BLANK*/age;
char sex;
/*BLANK*/struct date /*BLANK*/date_birthday;
/*BLANK*/char /*BLANK*/language;
/*BLANK*/char /*BLANK*/department[30];
};
void main()
{
struct student s1={"李明",20,1,{5,6,1976},'C',"计算机系"};
printf("%s %s %d %d-%d-%d %c %s\n",s1.name,s1.sex==1?"男":"女",/*BLANK*/s1.age,s1.date_birthday.year,s1.date_birthday.month,s1.date_birthday.day,
s1.language,s1.department/*BLANK*/);
}
