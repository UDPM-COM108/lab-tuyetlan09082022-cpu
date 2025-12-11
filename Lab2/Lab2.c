#include <stdio.h>

int main(){
    // Bài 1: Xây dựng chương trình tính tổng và hiệu của hai số nguyên
    int x, y;
    printf("Nhap vao hai so nguyen x va y: ");
    scanf("%d %d", &x, &y);
    int tong = x + y;
    int hieu = x - y;
    printf("Tong cua hai so nguyen: %d\n", tong);
    printf("Hieu cua hai so nguyen: %d\n", hieu);

    // Bài 2 : Xây dựng chương trình tính chu vi và diện tích hình chữ nhật
    float cdai, crong;
    printf("Nhap vao chieu dai va chieu rong cua hinh chu nhat: ");
    scanf("%f %f", &cdai, &crong);

    float chuvi = 2 * (cdai + crong);
    float dientich = cdai * crong;

    printf("Chu vi hinh chu nhat: %.2f\n", chuvi);
    printf("Dien tich hinh chu nhat: %.2f\n", dientich);

    // Bài 3 : Xây dựng chương trình tính chu vi và diện tích hình tròn
    float r;
    printf("Nhap vao ban kinh hinh tron: ");
    scanf("%f", &r);

    float chuviHT = 2 * 3.14 * r;
    float dientichHT = 3.14 * r * r;

    printf("Chu vi hinh tron: %.2f\n", chuviHT);
    printf("Dien tich hinh tron: %.2f\n", dientichHT);

    //Bài 4 Xây dựng chương trình tính điểm trung bình
    float Toan, Ly, Hoa, diemTB;
    printf("\nNhap vao diem Toan, Ly, Hoa:");
    scanf("%f %f %f", &Toan, &Ly, &Hoa);
    diemTB = (Toan*3 + Ly*2 + Hoa*1)/6;
    printf("Diem trung binh: %.2f\n", diemTB);

    // Bài 5 Xây dựng chương trình tính chu vi tam giác vuông
    float a, b;          // 2 cạnh góc vuông
    float chuvi, dientich;

    // Nhập 2 cạnh góc vuông
    printf("Nhap canh goc vuong a: ");
    scanf("%f", &a);
    printf("Nhap canh goc vuong b: ");
    scanf("%f", &b);

    // Tính chu vi và diện tích
    chuvi = a + b + sqrt(a * a + b * b);
    dientich = (a * b) / 2;

    // Xuất kết quả
    printf("Chu vi tam giac vuong = %.2f\n", chuvi);
    printf("Dien tich tam giac vuong");
    return 0;
}