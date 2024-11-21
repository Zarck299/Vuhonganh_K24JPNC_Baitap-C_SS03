#include <stdio.h>

int main() {
    float diemToan, diemVan, diemAnh, tong, trungBinh;

    printf("Nhap diem Toan: ");
    scanf("%f", &diemToan);

    printf("Nhap diem Van: ");
    scanf("%f", &diemVan);

    printf("Nhap diem Anh: ");
    scanf("%f", &diemAnh);

    tong = diemToan + diemVan + diemAnh;
    trungBinh = tong / 3;

    printf("Tong diem: %.2f\n", tong);
    printf("Diem trung binh: %.2f\n", trungBinh);

    return 0;
}

