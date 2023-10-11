#include <stdio.h>

void main (){
    char ch;
    printf("Nhap vao gia ch: ");
    scanf("%c", &ch);

    if(ch >= '0' && ch <= '9'){
        printf("Day la ky tu so");
    }
    else if((ch >='a' && ch <= 'z') || (ch >='A' && ch <= 'Z')){
        printf("Day la ky tu chu cai");
    }
    else if(ch == '+' ||ch == '-' ||ch == '*' ||ch == '/' || ch == '%'){
        printf("Day la ky tu phep toan");
    }
    else printf("Day la ki tu khac");
}