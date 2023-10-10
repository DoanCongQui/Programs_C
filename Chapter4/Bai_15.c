#include <stdio.h>
#include <math.h>

int main (){
   int n, i;
   printf("Nhap vao gia tri duong n: ");
   scanf("%d", &n);
   if (n < 1) return 0;

   printf("Ket qua: ");
   for(i = 1; i <= n; i++){
      if (sqrt(i) == (int)sqrt(i)) printf("%d ", i);   
   }

   return 0;

}
