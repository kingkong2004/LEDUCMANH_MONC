#include <iostream>
#include <algorithm>
#include <string>

struct HocSinh {
    std::string ten;
    int diem;
};

// Hàm so sánh ð? s?p x?p
bool soSanhHocSinh(const HocSinh& hs1, const HocSinh& hs2) {
    return hs1.diem < hs2.diem;
}

// Hàm tính ði?m trung b?nh
double tinhDiemTrungBinh(HocSinh* hocSinh, int soLuongDiem) {
    int tongDiem = 0;
    for (int i = 0; i < soLuongDiem; i++) {
        tongDiem += hocSinh[i].diem;
    }
    return static_cast<double>(tongDiem) / soLuongDiem;
}

int main() {
    int soLuongDiem;
    do {
        std::cout << "Nh?p s? lý?ng ði?m ki?m tra (không âm): ";
        std::cin >> soLuongDiem;
    } while (soLuongDiem <= 0);

    HocSinh* danhSachHocSinh = new HocSinh[soLuongDiem];

    std::cout << "Nh?p ði?m ki?m tra và tên h?c sinh:" << std::endl;
    for (int i = 0; i < soLuongDiem; i++) {
        do {
            std::cout << "Tên h?c sinh " << i + 1 << ": ";
            std::cin >> danhSachHocSinh[i].ten;
            std::cout << "Ði?m " << i + 1 << ": ";
            std::cin >> danhSachHocSinh[i].diem;
        } while (danhSachHocSinh[i].diem < 0);
    }

    // S?p x?p danh sách theo th? t? tãng d?n
    std::sort(danhSachHocSinh, danhSachHocSinh + soLuongDiem, soSanhHocSinh);

    // Tính ði?m trung b?nh
    double diemTrungBinh = tinhDiemTrungBinh(danhSachHocSinh, soLuongDiem);

    // Hi?n th? danh sách ði?m và ði?m trung b?nh
    std::cout << "Danh sách ði?m ki?m tra theo th? t? tãng d?n:" << std::endl;
    for (int i = 0; i < soLuongDiem; i++) {
        std::cout << "Tên: " << danhSachHocSinh[i].ten << ", Ði?m: " << danhSachHocSinh[i].diem << std::endl;
    }
    std::cout << "Ði?m trung b?nh: " << diemTrungBinh << std::endl;

    // Gi?i phóng b? nh? c?a m?ng ð?ng
    delete[] danhSachHocSinh;

    return 0;
}
