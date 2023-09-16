#include <stdio.h>

int main ()
{
    int x;
    
    printf("Nhap vao so co 3 chu so: ");
    scanf("%d", &x);

    int tram = (x/100)%10;
    int chuc = (x/10)%10;
    int don_vi = x%10;

    int So_dao = don_vi*100 + chuc*10 + tram;

    printf("So_dao: %d", So_dao);
}
