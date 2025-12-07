#include <stdio.h>
#include <stdlib.h>// exit


int main() {
    int luachon;
    do {
        printf("\n==================== MENU ====================\n");
        printf("1. Chức năng số 1: Kiểm tra số nguyên\n");
        printf("2. Chức năng số 2. Tìm Ước số chung và bội số chung của 2 số\n");
        printf("3. Chức năng số 3: Chương trình tính tiền cho quán Karaoke\n");
        printf("4. Chức năng số 4: Tính tiền điện\n");
        printf("5. Chức năng số 5: Chức năng đổi tiền\n");
        printf("6. Chức năng số 6: Xây dựng chức năng tính lãi suất vay ngân hàng vay trả góp\n");
        printf("7. Chức năng số 7: Xây dựng chương trình vay tiền mua xe\n");
        printf("8. Chức năng số 8: Sắp xếp thông tin sinh viên\n");
        printf("9. Chức năng số 9: Xây dựng game FPOLY-LOTT (2/15)\n");
        printf("10. Chức năng số 10: Xây dựng chương trình tính toán phân số\n");
        printf("0. Thoát menu\n");
        printf("===============================================\n");

        printf("Nhập lựa chọn của bạn: ");
        scanf("%d", &luachon);
        
        switch (luachon) {
            
              case 1: {
    printf("Chức năng số 1: Kiểm tra số nguyên\n");

    float num;
    printf("Nhập vào một số bất kỳ: ");
    scanf("%f", &num);

    if (num == (int)num) { // kiểm tra phần thập phân
        if (num > 0)
            printf("%.0f là số nguyên dương\n", num);
        else if (num < 0)
            printf("%.0f là số nguyên âm\n", num);
        else
            printf("0 là số nguyên\n");
    } else {
        printf("%.2f KHÔNG PHẢI là số nguyên!\n", num);
    }

    break;
}

       

            
            
            
            case 2: {
    printf("\nChức năng số 2: Tìm Ước số chung và Bội số chung của 2 số\n");

    int a, b;
    printf("Nhập số thứ nhất: ");
    scanf("%d", &a);
    printf("Nhập số thứ hai: ");
    scanf("%d", &b);

    // Tính UCLN theo Euclid
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    int ucln = x;

    // BCNN
    int bcnn = (a * b) / ucln;

    printf("UCLN của %d và %d là: %d\n", a, b, ucln);
    printf("BCNN của %d và %d là: %d\n", a, b, bcnn);

    break;
}


           case 3: {
    printf("\nChức năng số 3: Tính tiền Karaoke\n");

    int batdau, ketthuc;
    float giagoc = 30000;
    float tongtien = 0;

    printf("Nhập giờ bắt đầu (0-23): ");
    scanf("%d", &batdau);
    printf("Nhập giờ kết thúc (0-23): ");
    scanf("%d", &ketthuc);

    if (batdau < 0 || ketthuc > 23 || batdau >= ketthuc) {
        printf("Thời gian không hợp lệ!\n");
        break;
    }

    int sogio = ketthuc - batdau;

    if (sogio == 1) {
        tongtien = giagoc;
    } else {
        tongtien = giagoc + (sogio - 1) * (giagoc * 0.7);  // giờ thứ 2 trở đi giảm 30%
    }

    // Giảm thêm 10% nếu nằm trong khoảng 14h-17h
    if (batdau >= 14 && ketthuc <= 17) {
        tongtien *= 0.9;
    }

    printf("Tổng số giờ: %d\n", sogio);
    printf("Tiền karaoke phải trả: %.0f VND\n", tongtien);

    break;
}


            case 4: {
    printf("\nChức năng số 4: Tính tiền điện\n");

    int kwh;
    printf("Nhập số điện tiêu thụ (kWh): ");
    scanf("%d", &kwh);

    if (kwh < 0) {
        printf("Số điện không hợp lệ!\n");
        break;
    }

    long tien = 0;

    if (kwh <= 50)
        tien = kwh * 1678;
    else if (kwh <= 100)
        tien = 50 * 1678 + (kwh - 50) * 1734;
    else if (kwh <= 200)
        tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
    else if (kwh <= 300)
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    else if (kwh <= 400)
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
    else
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;

    printf("Tiền điện phải trả: %ld VND\n", tien);
    break;
}


            case 5: {
    printf("\nChức năng số 5: Đổi tiền\n");
    long money;
    printf("Nhập số tiền cần đổi (VND): ");
    scanf("%ld", &money);

    if (money <= 0) {
        printf("Số tiền không hợp lệ!\n");
        break;
    }

    int menhgia[] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000};
    int count[9] = {0};

    long temp = money;

    for (int i = 0; i < 9; i++) {
        count[i] = temp / menhgia[i];
        temp %= menhgia[i];
    }

    printf("Kết quả đổi tiền:\n");
    for (int i = 0; i < 9; i++) {
        if (count[i] > 0)
            printf("%d tờ %d VND\n", count[i], menhgia[i]);
    }

    printf("Số tiền còn lại không đổi được: %ld VND\n", temp);

    break;
}


           case 6: {
    printf("\nChức năng số 6: Tính lãi suất vay trả góp\n");

    double tienVay, laiSuat;
    int soThang;

    printf("Nhập số tiền vay (VND): ");
    scanf("%lf", &tienVay);

    printf("Nhập số tháng vay: ");
    scanf("%d", &soThang);

    printf("Nhập lãi suất hàng tháng (%%): ");
    scanf("%lf", &laiSuat);

    laiSuat /= 100.0;

    double gocHangThang = tienVay / soThang;

    printf("\n===== BẢNG THANH TOÁN =====\n");

    double tienConLai = tienVay;

    for (int i = 1; i <= soThang; i++) {
        double tienLai = tienConLai * laiSuat;
        double tienTra = gocHangThang + tienLai;

        printf("Tháng %2d: Gốc: %.0lf  | Lãi: %.0lf  | Tổng trả: %.0lf\n",
               i, gocHangThang, tienLai, tienTra);

        tienConLai -= gocHangThang;
    }

    break;
}

            case 7:
            printf("Chức năng số 7: Xây dựng chương trình vay tiền mua xe\n");
            break;

            case 8:
            printf("Chức năng số 8: Sắp xếp thông tin sinh viên\n");
            break;

            case 9:
            printf("Chức năng số 9: Xây dựng game FPOLY-LOTT (2/15)\n");
            break;

            case 10:
            printf("Chức năng số 10: Xây dựng chương trình tính toán phân số\n");
            break;

            case 0:
            printf("Hẹn gặp lại!!!\n");
            exit(0);
            break;
            
            default:
            printf("Lựa chọn không hợp lệ!!! Vui lòng chọn từ 1-10!!!\n");
            break;
        }
    } while (luachon != 0);
    
    return 0;
}