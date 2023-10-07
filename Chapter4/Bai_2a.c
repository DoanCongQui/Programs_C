#include <stdio.h>

int main ()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    // Tinh ve trai
    int vt = 0;
    for(int i = 1; i <= n; i++){
        vt += i*2;
    }
    printf("VT = %d\n", vt);
    
    // Tinh ve phai
    float vp = n*(n+1)*(2*n+1)/6;
    printf("VP = %g\n", vp);

    if (vt == vp) printf("Hai ve bang nhau");
    else printf("Hai ve khong bang nhau");

}