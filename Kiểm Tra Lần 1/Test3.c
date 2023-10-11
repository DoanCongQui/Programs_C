#include <stdio.h>

int main (){

    int n;

    // Input n | Kiểm tra Đk (n > 0)
    do {
        printf("Nhap so n (n > 0): ");
        scanf("%d", &n);
    } while (n <= 0);

    // Biểu thức tìm số đảo ngược
    int tram = (n/100)%10;
    int chuc = (n/10)%10;
    int don_vi = n%10;

    int So_dao = don_vi*100 + chuc*10 + tram;

    printf("So_dao: %d\n", So_dao);

    // Kiểm tra có phai số đối xứng không
    if (So_dao == n) printf("[%d] La so doi xung\n", So_dao);
    else printf("[%d] Khong phai so doi xung\n", So_dao);
}