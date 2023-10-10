#include <stdio.h>
#include <math.h>

void main ()
{
    float a, b, c;

    printf("Nhap vao gia tri 3 so a b c: ");
    scanf("%g %g %g", &a, &b, &c);

    float delta = b*b - 4*a*c;

    if (delta < 0) printf("Phuong trinh vo nghiem!\n");
    else if (delta == 0) {
        printf("Phuong trinh co nghiem kep: x1 = x2 = %g\n", -b/a);
    }
    else {
        printf("Phuong trinh co 2 nghiem phan biet:\n");
        printf("x1 = %g\n", (-b + sqrt(delta)) / (2*a));
        printf("x2 = %g\n", (-b - sqrt(delta)) / (2*a));
    }
}