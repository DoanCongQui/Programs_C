#include <stdio.h>

int main (){
   int n;

   printf("Nhap n: ");
   scanf("%d", &n);

   int vt = 0;
   for (int i = 1; i <= n; i++) {
      vt += i*(i+1)*(i+2);
   }
   printf("Ket qua 1: %d\n", vt);
   
   float vp = (n*(n+1)*(n+2)*(n+3)) * 1.0/4;
   printf("Ket qua 2: %g\n", vp);

   if(vt == vp) printf("Hai ve bang nhau\n");
   else printf("Hai ve khong bang nhau");

}
