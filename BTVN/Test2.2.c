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

    int Tang = 1;
    int Giam = 1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            Tang = 0;
            break;
        }
    }

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
    return 0;
}