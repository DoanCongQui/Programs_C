#include <stdio.h>
#include <math.h>

int main()
{
	int x, n;
	
	printf("Nhap x & n: ");
	scanf("%d %d", &x, &n);

    int A = pow(x*x+x+1, n) + pow(x*x+x-1, n);

    printf("Bieu thuc A: %d", A);
}