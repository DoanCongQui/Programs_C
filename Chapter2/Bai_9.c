#include <stdio.h>
#include <math.h>

int main()
{
	int r;
	float TT, DT;
	float PI = 3.14;
	
	printf("Nhap r: ");
	scanf("%d", &r);
	
	TT = (4*PI*r*r*r)/3;
	DT = 4*PI*r*r;
	
	printf("The tich: %g\nDien Tich: %g", TT, DT);
}