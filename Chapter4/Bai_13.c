#include <stdio.h>

int main ()
{
   int n;
   printf("Nhap vao gia tri duong n: ");
   scanf("%d", &n);

   printf("Ket qua: ");
   for (int i = 2; i <= n; i++) {
      int S = 1; // S true 
      for (int j = 2; j*j <= i; j++){
         if (i % j == 0){
            S = 0; // S false
            break; // Ket thuc thoat khoi vong lap
         }
      }
   if (S == 1) printf("%d ", i); // Neu S true thi thuc hien 
   }
   /** return 0; */
}
