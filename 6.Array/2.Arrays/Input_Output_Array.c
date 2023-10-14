#include <stdio.h>

int main (){

    int row, clow;

    printf("Nhap row, clow: ");
    scanf("%d %d", &row, &clow);

    int arr[row][clow];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < clow; j++){
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }    
    for (int i = 0; i < row; i++){
        for (int j = 0; j < clow; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }


}