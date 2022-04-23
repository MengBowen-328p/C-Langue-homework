#include<stdio.h>
void main()
{
char str[2][30];
unsigned int uAry[3][10];
float fAry[5];
double dAry[5];
printf("一个char型单元素占用内存长度 %d 字节,uAry数组占用内存长度 %d 字节\n",sizeof(char),sizeof(str));
printf("一个unsigned int型单元素占用内存长度 %d 字节,uAry数组占用内存长度 %d 字节\n",/*BLANK*/sizeof(unsigned int)/*BLANK*/,/*BLANK*/sizeof(uAry)/*BLANK*/);
printf("一个float 型单元素占用内存长度 %d 字节,fAry数组占用内存长度 %d 字节\n",/*BLANK*/sizeof(float)/*BLANK*/,/*BLANK*/sizeof(fAry)/*BLANK*/);
printf("一个double 型单元素占用内存长度 %d 字节,dAry数组占用内存长度 %d 字节\n",/*BLANK*/sizeof(double)/*BLANK*/,/*BLANK*/sizeof(dAry)/*BLANK*/);
}
