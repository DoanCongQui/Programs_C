#include <stdio.h>

int main() {
    /* Ghi chu: 
    Ki tu (*): Co the thay the value  
    isPrime: So nguyen to
    isExist: Da ton tai 
    */ 
    int arr[5] = {1, 2, 3, 4, 5};

    printf("Cac so nguyen to trong mang: ");
    for (int i = 0; i < 5; i++) {               //*
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
            // Kiem tra có chung gia tri trong mang khong
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

    // Tim va in ra so nguyen khong co trong mang
    printf("Mang khong chua cac so nguyen to: ");
    for (int i = 0; i < 5; i++){           //*
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
            // Kiem tra có chung gia tri trong mang không
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
