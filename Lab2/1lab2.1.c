#include <stdio.h>

int main(){
    int x, y;
    printf("Nhap vao hai so nguyen x va y: ");
    scanf("%d %d", &x, &y);
    int tong = x + y;
    int hieu = x - y;
    printf("Tong cua hai so nguyen: %d\n", tong);
    printf("Hieu cua hai so nguyen: %d\n", hieu);
    return 0;
}