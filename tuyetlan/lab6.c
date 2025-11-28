#include <stdio.h>

int main() {
    int n;

    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int a[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // ===== BÀI 1: Tính trung bình các số chia hết cho 3 =====
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            sum += a[i];
            count++;
        }
    }

    if (count == 0) {
        printf("\nBai 1: Khong co so nao chia het cho 3 trong mang.\n");
    } else {
        float tbc = (float)sum / count;
        printf("\nBai 1: Trung binh cac so chia het cho 3 = %.2f\n", tbc);
    }

    // ===== BÀI 2: Tìm max và min =====
    int max = a[0];
    int min = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    printf("Bai 2: Gia tri lon nhat trong mang: %d\n", max);
    printf("Bai 2: Gia tri nho nhat trong mang: %d\n", min);
    // ==== BÀI 3: Sắp xếp mảng theo thứ từ giảm dần ====
     printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int mang[n];

    // Nhập từng phần tử
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &mang[i]);
    }

    // Sắp xếp giảm dần (dùng thuật toán đổi chỗ)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mang[i] < mang[j]) {   // đổi để thành giảm dần
                int temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;
            }
        }
    }

    // Xuất kết quả sau khi sắp xếp
    printf("Mang sau khi sap xep giam dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }


    return 0;
}
