#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int luachon;

    do {
        printf("Chọn trương trình tính toán:\n");
        printf("1. Chuong trinh tinh hoc luc\n");
        printf("2. Giai phuong trinh bac nhat\n");
        printf("3. Giai phuong trinh bac hai\n");
        printf("4. Tính tiền điện\n");
        printf("0. Thoat\n");
        printf("Moi ban chon: ");
        scanf("%d", &luachon);
        switch (luachon) {

            case 1: {
            printf("\n=== Tinh hoc luc ===\n");
            float diemtb;

            printf("Nhap diem trung binh: ");
            scanf("%f", &diemtb);

            if (diemtb >= 9 && diemtb <= 10)
                printf("Hoc luc: Xuat Sac\n");
            else if (diemtb >= 8)
                printf("Hoc luc: Gioi\n");
            else if (diemtb >= 6.5)
                printf("Hoc luc: Kha\n");
            else if (diemtb >= 5)
                printf("Hoc luc: Trung binh\n");
            else
                printf("Hoc luc: Yeu\n");

            break;
        }
            case 2: {
            printf("\n=== Giai phuong trinh bac nhat ===\n");
            float a, b, x;

            printf("Nhap a: ");
            scanf("%f", &a);

            printf("Nhap b: ");
            scanf("%f", &b);

            if (a == 0) {
                if (b == 0)
                    printf("Phuong trinh vo so nghiem\n");
                else
                    printf("Phuong trinh vo nghiem\n");
            } else {
                x = -b / a;
                printf("Phuong trinh co nghiem x = %.2f\n", x);
            }

            break;
        }
            case 3: {
            printf("\n=== Giai phuong trinh bac hai ===\n");

            float a2, b2, c2;
            float delta, x1, x2;

            printf("Nhap a: ");
            scanf("%f", &a2);

            printf("Nhap b: ");
            scanf("%f", &b2);

            printf("Nhap c: ");
            scanf("%f", &c2);

            if (a2 == 0) {
                if (b2 == 0) {
                    if (c2 == 0)
                        printf("Phuong trinh vo so nghiem\n");
                    else
                        printf("Phuong trinh vo nghiem\n");
                } else {
                    float x = -c2 / b2;
                    printf("Phuong trinh bac nhat, co nghiem x = %.2f\n", x);
                }
            }
            else {
                delta = b2 * b2 - 4 * a2 * c2;

                if (delta < 0) {
                    printf("Phuong trinh vo nghiem\n");
                }
                else if (delta == 0) {
                    x1 = -b2 / (2 * a2);
                    printf("Phuong trinh co nghiem kep x = %.2f\n", x1);
                }
                else {
                    x1 = (-b2 + sqrt(delta)) / (2 * a2);
                    x2 = (-b2 - sqrt(delta)) / (2 * a2);

                    printf("Phuong trinh co 2 nghiem rieng biet:\n");
                    printf("x1 = %.2f\n", x1);
                    printf("x2 = %.2f\n", x2);
                }
            }

            break;
        }
            case 4:
          int kwh;
    double tien = 0;

    printf("Nhap so kWh tieu thu trong thang: ");
    scanf("%d", &kwh);

    if (kwh < 0) {
        printf("So kWh khong hop le!\n");
        return 0;
    }

    if (kwh <= 50) {
        tien = kwh * 1678;
    }
    else if (kwh <= 100) {
        tien = 50 * 1678 + (kwh - 50) * 1734;
    }
    else if (kwh <= 200) {
        tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
    }
    else if (kwh <= 300) {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    }
    else if (kwh <= 400) {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
    }
    else {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
    }
    printf("Tien dien phai dong: %.0f dong\n", tien); 
            case 0:
            printf("Thoat chuong trinh...\n");
            exit(0);
            break;

        default:
            printf("Lua chon khong hop le. Moi chon lai!\n");
        }

    } while (luachon != 0);

    return 0;
}