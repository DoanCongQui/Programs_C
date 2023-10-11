#include <stdio.h>

int main() {
    int n;

    // Nhập số phần tử của mảng
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    // Khai báo mảng
    int arr[n];

    // Nhập các phần tử của mảng
    printf("Nhap mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Tìm và in ra các số nguyên tố trong mảng
    printf("Cac so nguyen to trong mang: ");
    for (int i = 0; i < n; i++) {
        int isPrime = 1;
        if (arr[i] < 2) {
            isPrime = 0;
        } else {
            for (int j = 2; j * j <= arr[i]; j++) {
                if (arr[i] % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime) {
            // Ktra có chung gia tri trong mang không
            int isExist = 0;
            for (int k = 0; k < i; k++) {
                if (arr[k] == arr[i]) {
                    isExist = 1;
                    break;
                }
            }

            if (!isExist) {
                printf("%d ", arr[i]);
            }
        }
    }
    printf("\n");

    // Tìm và in ra các số nguyên tố khong co trong mảng
    printf("Mang khong chua cac so nguyen to: ");
    for (int i = 0; i < n; i++) {
        int isPrime = 1;
        if (arr[i] < 2) {
            isPrime = 0;
        } else {
            for (int j = 2; j * j <= arr[i]; j++) {
                if (arr[i] % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (!isPrime) {
            // Ktra có chung gia tri trong mang không
            int isExist = 0;
            for (int k = 0; k < i; k++) {
                if (arr[k] == arr[i]) {
                    isExist = 1;
                    break;
                }
            }

            if (!isExist) {
                printf("%d ", arr[i]);
            }
        }
    }
    
    return 0;
}
