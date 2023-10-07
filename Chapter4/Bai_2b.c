#include <stdio.h>

int main ()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    float vt = 0;
    int gt = 1;

    for(int i = 1; i <= n; i++){
        gt *= (i+1);
        vt += ((i*1.0)/gt);
    }
    printf("VT = %g\n", vt);

    float vp = 1 - (1.0/gt);
    printf("VP = %g\n", vp);

    if(vt == vp) printf("Hai ve bang nhau");
    else printf("Hai ve khong bang nhau");
}