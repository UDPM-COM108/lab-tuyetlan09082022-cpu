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
            case 1:
                printf("Chức năng số 1\n");
                break;
            
            case 2:
            printf("Chức năng số 2:Tìm Ước số chung và bội số chung của 2 số\n");
            break;

            case 3:
            printf("Chức năng số 3: Tính tiền cho quán Karaoke\n");
            break;

            case 4:
            printf("Chức năng số 4: Tính tiền điện\n");
            break;

            case 5:
            printf("Chức năng số 5: Chức năng đổi tiền\n");
            break;

            case 6:
            printf("Chức năng số 6: Tính lãi suất vay ngân hàng vay trả góp\n");
            break;

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