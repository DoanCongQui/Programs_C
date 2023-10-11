#include <stdio.h>
#include <math.h>

int main()
{
	float l, g;
    g = 9.81;
	
	printf("Nhap chieu dai con la: ");
	scanf("%f", &l);
	
	float T = 2*3.14*sqrt(l/g);
	
	printf("Chu ki con lac don: %g", T);
}