#include <stdio.h>

// Hàm tính tổng hai số nguyên
int tinhTong(int a, int b) {
    int sum;       // biến sum lưu tổng
    sum = a + b;   // tính tổng
    return sum;    // trả về kết quả
}

int main() {
    int so1, so2, ketQua;

    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);

    printf("Nhap so thu hai: ");
    scanf("%d", &so2);

    
    ketQua = tinhTong(so1, so2);

    printf("Tong cua %d va %d la: %d\n", so1, so2, ketQua);

    return 0;
}