#include <stdio.h>
#include <math.h>

int main (){
    // Ghi chu: Ki tu (*): Co the thay the value
    int arr[4][5]= {{1, 2, 3, 4, 5},
                    {-6, 7, 8, 9, -10},
                    {11, -12, 13, -14, 15},
                    {16, 17, -18, 19, 20}};

    //a. Kiem tra gia tri duong cua mang 
    printf("Cac gia tri duong cua mang:\n");
    for (int i = 0; i < 4; i++) {                       //*
        for (int j = 0; j < 5; j++) {                   //*
                if (arr[i][j] > 0){
                    printf("%d  ", arr[i][j]);
                }
            }
            printf("\n");
        }
    
    //b. Kiem tra phan dong thu k cau ma tran co tang dan hay giam dan khong

    int k;
    printf("Nhap dong k (tu 0 den %d): ", 4 - 1);               //*
    scanf("%d", &k);

    int increasing = 1, decreasing = 1;
    for (int j = 0; j < 4 - 1; j++) {                           //*
        if (arr[k][j] > arr[k][j + 1]) {
            increasing = 0;
        } else if (arr[k][j] < arr[k][j + 1]) {
            decreasing = 0;
        }
    }

    if (increasing) {
        printf("Dong %d tang dan.\n", k);
    } else if (decreasing) {
        printf("Dong %d giam dan.\n", k);
    } else {
        printf("Dong %d khong tang dan cung khong giam dan.\n", k);
    }

    return 0;
}