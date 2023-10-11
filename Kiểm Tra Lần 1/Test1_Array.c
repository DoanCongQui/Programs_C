#include <stdio.h>
#include <math.h>

int main (){
    int inp[3]; 
    int idx;
    
    // Input n1, n2, n3
    for (idx = 0; idx <= 2; idx++){
        printf("Nhap gia tri [%d]: ", idx+1);
        scanf("%d", &inp[idx]);
    }

    // Xử lý biểu thưc S = 1^2 - 2^2 + 3^2 -.....+(-1)^n-1 * n^2
    for (idx = 0; idx <= 2; idx++){
        int S = 0; 
        for(int i = 1; i <= inp[idx] ; i++){
            S += pow(-1, i-1) * i*i;
        } 
        printf("S[%d] = %d\n", idx+1, S);
    }

    return 1;
}
