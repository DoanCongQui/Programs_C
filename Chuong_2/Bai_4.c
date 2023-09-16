#include <stdio.h>

int main()
{
	int m1, m2, r;
	float G = 6.67E-11;
	
	printf("Nhap m1 & m2: ");
	scanf("%d %d", &m1, &m2);
	
	printf("Nhap r: ");
	scanf("%d", &r);
	
	float F = (G*(m1 * m2)/(r*r));
	
	printf("Ket qua: %gN", F);
	printf("\nG = %g", G);
}
