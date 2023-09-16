#include <stdio.h>

int main ()
{
    int tien;
    int to50, to20, to10, to5, to1;

    printf("Nhap tien: ");
    scanf("%d", &tien);

    to50 = tien/50;
    to20 = tien%50/20;
    to10 = tien%50%20/10;
    to5 = tien%50%20%10/5;
    to1 = tien%50%20%10%5/1;
    printf("to_50: %d\nto_20: %d\nto_10: %d\nto_5: %d\nto_11: %d",
        to50, to20, to10, to5, to1);
}