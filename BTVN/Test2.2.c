#include <stdio.h>

int main (){

    int n;

    printf("n = ");
    scanf("%d", &n);

    int arr[n];

    
    for (int i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Kiem tra mang co duoc sap xep theo thu tu khong 
    int Tang = 1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            Tang = 0;
            break;
        }
    }

    int Giam = 1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            Giam = 0;
            break;
        }
    }

    if (Tang) {
        printf("Mang duoc sap xep tang dan.\n");
    }
    else if(Giam){
        printf("Mang duoc sap xep giam dan.\n");
    }
    else {
        printf("Mang khong duoc sap xep theo thu tu.\n");
    }


    // Tim phan tu so nguyen to nho nhat 
    for (int i = 0; i < n; i++){
        int Ktra = 1;
        if (arr[i] < 2)
            Ktra = 0;
        else{
            for (int j = 2; j*j <= arr[i]; j++){
                if (arr[i] % j == 0){
                    Ktra = 0;
                    break;
                }
            }
        }
        if (Ktra) {
            // Ktra gia tri co bi lap khong 
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