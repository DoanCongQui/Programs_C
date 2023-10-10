#include <stdio.h>

void main ()
{
   float a, b, x;

   printf("Nhap a va b: ");
   scanf("%g %g", &a, &b);

   if (a == 0){
      if (b == 0) printf("Phuong trinh co vo so nghiem!\n");
      else printf("Phuong trinh vo nghiem!\n");
   }
   else{
      printf("Phuong trinh co nghiem: x = %g", x = (- b) / a);
   } 
}