#include <stdio.h>

int main() {
    int n, i, j, sum;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    if (n < 1) return 0;

    printf("Ket qua la: ");
   
    for(i = 1; i <= n; i++) {
        sum = 0;
        for(j = 1; j <= i/2; j++) { 
            if(i % j == 0) {
                sum += j;
            }
        }
        if(sum == i) printf("%d ", i);
    }

    return 0;
}

