#include <stdio.h>
#include <math.h>

int main ()
{
    int a, b , c;
    printf("Nhap vao 3 canh tam giac: ");
    scanf("%d %d %d", &a, &b, &c);

    int CV = a+b+c;
    float p = CV/2;
    float DT = sqrt(p*(p-a)*(p-b)*(p-c));

    printf("Chu vi : %d\nDien Tich: %g", CV, DT);

}