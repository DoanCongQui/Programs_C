#include <stdio.h>
#include <math.h>
#define E 0.0001

int main ()
{
    double x, y, sin;
    
    printf("Nhap x: ");
    scanf("%lf", &x);

    int k = 1;
    y = x;
    sin = x;

    while (fabs(y) >= E)
    {
        k += 2;
        y = -y*x*x / ((k-1)*k);

        sin += y;
    }
    
    printf("KQ: %g", sin);
}
