#include <stdio.h>

int main ()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int S = 0;
    for (int i = 1; i <= n; i++){
        S = S + i*(i+1);
    }
    printf("Ket qua: %d", S);
}