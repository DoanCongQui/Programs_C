#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, CV, DT;
	
	printf("Nhap a & b: ");
	scanf("%d %d", &a, &b);
	
	CV = pow(a+b, 2);
	DT = a * b;
	
	printf("Chu Vi: %d\nDien Tich: %d", CV, DT);
	
}
