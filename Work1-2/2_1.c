#include <stdio.h>
int main()
{
	int a =5, b= 7;
	float x=67.8564f,y=-789.124f;
	char c='A';
	long n=1234567;
	unsigned u= 4294967295;
	printf("1. %d%d\n", a,b);
	printf("2. %3d%3d\n", a, b);
	printf("3. %f, %f\n", x, y);
	printf("4. %-10f,%-10f\n",x,y);
	printf("5. %8.2f,%8.2f,%.4f,%.4f,%3f,%3f\n",x,y,x,y,x,y);
	printf("6. %e,%10.2e\n",x, y);
	printf("7. %c,%d,%o,%x\n",c, c, c, c);
	printf("8. %ld,%lo,%x\n",n,n,n);
	printf("9. %u,%o,%x,%d\n", u, u, u, u);
	printf("10. %s,%5.3s\n","COMPUTER" ,"COMPUTER");
	return 0;
}