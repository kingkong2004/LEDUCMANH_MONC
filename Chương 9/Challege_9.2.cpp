#include <iostream>
#include <algorithm>

// H�m t�nh �i?m trung b?nh
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
        std::cout << "Nh?p s? l�?ng �i?m ki?m tra (kh�ng �m): ";
        std::cin >> soLuongDiem;
    } while (soLuongDiem <= 0);

    // Ph�n b? �?ng m?ng �? l�u tr? �i?m ki?m tra
    int* diem = new int[soLuongDiem];

    std::cout << "Nh?p �i?m ki?m tra:" << std::endl;
    for (int i = 0; i < soLuongDiem; i++) {
        do {
            std::cout << "�i?m " << i + 1 << ": ";
            std::cin >> diem[i];
        } while (diem[i] < 0);
    }

    // S?p x?p m?ng theo th? t? t�ng d?n
    std::sort(diem, diem + soLuongDiem);

    // T�nh �i?m trung b?nh
    double diemTrungBinh = tinhDiemTrungBinh(diem, soLuongDiem);

    // Hi?n th? danh s�ch �i?m v� �i?m trung b?nh
    std::cout << "Danh s�ch �i?m ki?m tra theo th? t? t�ng d?n:" << std::endl;
    for (int i = 0; i < soLuongDiem; i++) {
        std::cout << "�i?m " << i + 1 << ": " << diem[i] << std::endl;
    }
    std::cout << "�i?m trung b?nh: " << diemTrungBinh << std::endl;

    // Gi?i ph�ng b? nh? c?a m?ng �?ng
    delete[] diem;

    return 0;
}
