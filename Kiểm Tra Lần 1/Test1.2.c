#include <stdio.h>

int main() {

    for (int i = 0; i < 3; i++) {
        int n;

        //Input | Kiểm tra điều kiện n > 100
        do {
            printf("Nhap so n (n > 100): ");
            scanf("%d", &n);
        } while (n <= 100);

        // Xử lý biểu thức 1 + 2 + 3 + ...... m <= n
        int sum = 0;
        int m = 0; 
        while (sum <= n) {
            m++;
            sum += m;
            
        }

        printf("So m thoa dieu kien la %d\n", m);
    }

    return 0;
}
