#include <stdio.h>

int main() {
    int ni;

    // input n1, n2, n3
    for (int i = 0; i < 3; i++) {
        printf("Nhap gia tri n%d: ", i + 1);
        scanf("%d", &ni);

        int S = 0;
        // Xử lý biểu thưc S = 1^2 - 2^2 + 3^2 -.....+(-1)^n-1 * n^2
        for (int j = 1; j <= ni; j++) {
            S += ((j % 2 == 1) ? 1 : -1) * (j * j);
        }

        printf("Ket qua S%d = %d\n", i + 1, S);
    }
    return 0;
}
