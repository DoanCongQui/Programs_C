#include <stdio.h>

int main (){
   int n;

   printf("Nhap n: ");
   scanf("%d", &n);

   int vt = 0;
   int S = 1;
   for (int i = 1; i <= n; i++) {
      S *= i;
      printf("%d ", S);
      vt += i*S;
      printf("%d\n", vt);
   }
   printf("\n");
   printf("VT = %d\n", vt);

   S = 1;
   for(int j = 1; j <= (n+1); j++){
      S *= j;
   }
   int vp = S - 1;
   printf("VP = %d\n", vp);

   if(vt == vp) printf("Hai ve bang nhau\n");
   else printf("Hai ve khong bang nhau\n");

}
