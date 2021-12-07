#include <stdio.h>
struct  { int hour, minute, second; }time; //无名结构体
void main(void)
{
scanf("%d:%d:%d",/*BLANK*/&time.hour,&time.minute,&time.second/*BLANK*/);
time.second++;
if(/*BLANK*/time.second/*BLANK*/==60)
{
time.minute++;
time.second=0;
if(/*BLANK*/time.minute/*BLANK*/==60)
{
time.hour++;
time.minute=0;
if(/*BLANK*/time.hour==24/*BLANK*/)
time.hour=0;
}
}
printf("%d:%d:%d\n",time.hour,time.minute,time.second);
}
