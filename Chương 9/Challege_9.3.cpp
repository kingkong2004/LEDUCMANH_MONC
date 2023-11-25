#include <iostream>
#include <algorithm>

// Hàm tính ði?m trung b?nh
double tinhDiemTrungBinh(int* diem, int soLuongDiem) {
    int tongDiem = 0;
    for (int i = 0; i < soLuongDiem; i++) {
        tongDiem += diem[i];
    }
    return static_cast<double>(tongDiem) / soLuongDiem;
}

int main() {
    int soLuongDiem;
    do {
        std::cout << "Nh?p s? lý?ng ði?m ki?m tra (không âm): ";
        std::cin >> soLuongDiem;
    } while (soLuongDiem <= 0);

    // Phân b? ð?ng m?ng ð? lýu tr? ði?m ki?m tra
    int* diem = new int[soLuongDiem];

    std::cout << "Nh?p ði?m ki?m tra:" << std::endl;
    for (int i = 0; i < soLuongDiem; i++) {
        do {
            std::cout << "Ði?m " << i + 1 << ": ";
            std::cin >> diem[i];
        } while (diem[i] < 0);
    }

    // S?p x?p m?ng theo th? t? tãng d?n
    std::sort(diem, diem + soLuongDiem);

    // Lo?i b? ði?m ki?m tra th?p nh?t
    if (soLuongDiem > 1) {
        diem[0] = diem[1];
    }

    // Tính ði?m trung b?nh
    double diemTrungBinh = tinhDiemTrungBinh(diem, soLuongDiem);

    // Hi?n th? danh sách ði?m và ði?m trung b?nh
    std::cout << "Danh sách ði?m ki?m tra theo th? t? tãng d?n (ði?m th?p nh?t ð? b? lo?i b?):" << std::endl;
    for (int i = 1; i < soLuongDiem; i++) {
        std::cout << "Ði?m " << i << ": " << diem[i] << std::endl;
    }
    std::cout << "Ði?m trung b?nh: " << diemTrungBinh << std::endl;

    // Gi?i phóng b? nh? c?a m?ng ð?ng
    delete[] diem;

    return 0;
}
