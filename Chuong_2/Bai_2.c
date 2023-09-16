#include <stdio.h>

int main()
{
	float r, CV, DT;
	float PI = 3.14;

	printf("Nhap ban kinh r: ");
	scanf("%g", &r);
	
	CV = 2*PI*r;
	DT = PI*r*r;
	
	printf("Chu vi: %g", CV);
	printf("\nDien tich: %g", DT);

}
