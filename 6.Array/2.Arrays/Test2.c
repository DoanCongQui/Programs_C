#include <stdio.h>
#include <math.h>

int main (){

    int arr[4][5]= {{1, 2, 3, 4, 5},
                    {6, 7, 8, 9, 10},
                    {11, 12, 13, 14, 15},
                    {16, 17, 18, 19, 20}};

    //a. Diem so phan tu so chinh phuong
    int count = 0;
    printf("Cac so chinh phuong: ");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            int sqrtValue = sqrt(arr[i][j]);
            if (sqrtValue * sqrtValue == arr[i][j]) {
                printf("%d  ", arr[i][j]);
                count++;
            }
        }
    }
    printf("\nCo %d chinh phuong trong mang tren!\n", count);

    //b. Diem so phan tu so chinh phuong tren dong thu k

    int k;
    printf("Nhap so dong muon kiem tra: ");
    scanf("%d", &k);

    int i = k;
    count = 0;
    // Co the thay doi value 4 thanh so mang duoc khai bao 
    if (i < 4 && i >= 0){ 
        printf("Cac so chinh phuong tren dong da chon: ");
        for (int j = 0; j < 5; j++) {
                int sqrtValue = sqrt(arr[i][j]);
                if (sqrtValue * sqrtValue == arr[i][j]) {
                    printf("%d  ", arr[i][j]);
                    count++;
                }
            }
        printf("\nCo %d chinh phuong trong dong tren!\n", count);
    }
    else printf("Dong nay hien khong co trong mang!\n");

    return 0;
}