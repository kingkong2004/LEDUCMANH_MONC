#include <iostream>
#include <algorithm>
#include <string>

struct HocSinh {
    std::string ten;
    int diem;
};

// H�m so s�nh �? s?p x?p
bool soSanhHocSinh(const HocSinh& hs1, const HocSinh& hs2) {
    return hs1.diem < hs2.diem;
}

// H�m t�nh �i?m trung b?nh
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
        std::cout << "Nh?p s? l�?ng �i?m ki?m tra (kh�ng �m): ";
        std::cin >> soLuongDiem;
    } while (soLuongDiem <= 0);

    HocSinh* danhSachHocSinh = new HocSinh[soLuongDiem];

    std::cout << "Nh?p �i?m ki?m tra v� t�n h?c sinh:" << std::endl;
    for (int i = 0; i < soLuongDiem; i++) {
        do {
            std::cout << "T�n h?c sinh " << i + 1 << ": ";
            std::cin >> danhSachHocSinh[i].ten;
            std::cout << "�i?m " << i + 1 << ": ";
            std::cin >> danhSachHocSinh[i].diem;
        } while (danhSachHocSinh[i].diem < 0);
    }

    // S?p x?p danh s�ch theo th? t? t�ng d?n
    std::sort(danhSachHocSinh, danhSachHocSinh + soLuongDiem, soSanhHocSinh);

    // T�nh �i?m trung b?nh
    double diemTrungBinh = tinhDiemTrungBinh(danhSachHocSinh, soLuongDiem);

    // Hi?n th? danh s�ch �i?m v� �i?m trung b?nh
    std::cout << "Danh s�ch �i?m ki?m tra theo th? t? t�ng d?n:" << std::endl;
    for (int i = 0; i < soLuongDiem; i++) {
        std::cout << "T�n: " << danhSachHocSinh[i].ten << ", �i?m: " << danhSachHocSinh[i].diem << std::endl;
    }
    std::cout << "�i?m trung b?nh: " << diemTrungBinh << std::endl;

    // Gi?i ph�ng b? nh? c?a m?ng �?ng
    delete[] danhSachHocSinh;

    return 0;
}
