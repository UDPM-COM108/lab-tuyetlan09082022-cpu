#include <stdio.h>

int main(){
    float a, b, nhan, chia;
    printf("nhap vao hai so thuc a va b:");
    scanf("%f %f", &a, &b);
    printf("xuat ra 2 so thuc:%f %f", a, b);
    nhan = a * b;
    chia = a / b;
    printf("\nNhan 2 so thuc: %.2f", nhan);
    printf("\nChia 2 so thuc: %.2f", chia);
    return 0;
}