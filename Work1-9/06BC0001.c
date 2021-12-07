#include <stdio.h>
typedef struct  _complex_{ int Real, Imaginary; }Complex; //无名结构体
void main(void)
{
Complex a,b,c;
scanf("%d+%di",&a.Real,&a.Imaginary);
scanf("%d+%di",&b.Real,&b.Imaginary);
c.Real=a.Real*b.Real-a.Imaginary*b.Imaginary;
c.Imaginary=a.Real*b.Imaginary+a.Imaginary*b.Real;
printf("(%d+%di)*(%d+%di)=%d+%di\n",a.Real,a.Imaginary,b.Real,b.Imaginary,c.Real,c.Imaginary);
}
