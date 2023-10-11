#include <stdio.h>

int main ()
{
    int M[3];
    int idx;
    

    // Input điểm 
    for(idx = 0; idx <= 2; idx++){
        printf("Diem thu [%d]: ", idx + 1);
        scanf("%d", &M[idx]);
    }

    // Tính điểm trung bình 
    float avg = 0;
    for (idx=0; idx <=2; idx++)
    {
        avg += (float) M[idx]/3;
    }
    printf("Diem trung binh: %g\n", avg);

    // Xếp loại 
    printf("Hoc Sinh Loai ");
    float DK = avg;
    if(DK >= 90) printf("E+");
    else if(DK >= 80 && DK < 90) printf("E");
    else if(DK >= 70 && DK < 80) printf("A+");
    else if(DK >= 60 && DK < 70) printf("A");
    else if(DK >= 50 && DK < 60) printf("B+");
    else printf("F => [ROT]");

    return 0;
}