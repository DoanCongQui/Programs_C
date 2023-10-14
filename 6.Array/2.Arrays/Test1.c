#include <stdio.h>
#include <math.h>

int main (){

    int arr[4][5]= {{1, 2, 3, 4, 5},
                    {6, 7, 8, 9, 10},
                    {11, 12, 13, 14, 15},
                    {16, 17, 18, 19, 20}};

    //a. Tinh tong cac phan tu tren dong thu k
    int Sum = 0;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            Sum += arr[i][j];
        }
    }
    printf("Sum = %d\n", Sum);
    
    //b. Tính trung bình cộng các phần tử là số chính phương
    int sum = 0;
    int count = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            int sqrtValue = sqrt(arr[i][j]);
            if (sqrtValue * sqrtValue == arr[i][j]) {
                sum += arr[i][j];
                count++;
            }
        }
    }

    if (count > 0) {
        float average = (float)sum / count;
        printf("Trung binh cong cac so chinh phuong: %.2f\n", average);
    } else {
        printf("Khong co so chinh phuong trong mang.\n");
    }
    return 0;
}