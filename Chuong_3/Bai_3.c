#include <stdio.h>

int main ()
{
   int a, b;
   printf("Nhap a va b: ");
   scanf("%d %d", &a, &b);

   float x;
   x = -b*1.0 / a;

   printf("%g", x);
}
