#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	float x, kq;
	printf("Nhap n va x: ");
	scanf("%d %g", &n, &x);
	
	kq = pow(x*x + 1, n);
	
	printf("Ket qua: %g", kq);
	
	
}
