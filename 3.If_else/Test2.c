#include <stdio.h>

void main (){
    char pt;
    int a, b;

    printf("a = ");
    scanf("%d", &a);

    fflush(stdin);

    printf("pt: ");
    scanf("%c", &pt);
    
    printf("b = ");
    scanf("%d", &b);

    switch (pt)
    {
    case '+' : 
        printf("Tong = %d", a+b);
        break;
    case '-' : 
        printf("Hieu = %d", a-b);
        break; 

    case '*' :
        printf("Tich = %d", a*b);
        break;
    case '/' : 
        printf("Thuong = %g", a*1.0/b);
        break;
    case '%' :
        printf("Du = %d", a%b);
        break;
    default: 
        printf("Phep toan khong hop le");
        break;
    }
}