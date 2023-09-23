#include <stdio.h>
#include <string.h>



int main ()
{
    int a, b;
    char pt;

    printf("Nhap a: ");
    scanf("%d", &a);

    fflush(stdin);

    printf("Nhap pt: ");
    scanf("%c", &pt);
    printf("Nhap b: ");
    scanf("%d", &b);

    printf("Ket qua pt: %c", pt);
}