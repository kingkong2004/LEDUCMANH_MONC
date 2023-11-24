#include <iostream>

int main() {
    const int so_banh_quy_tren_tui = 30;
    const int calo_tren_tui = 3000;  // M?i túi ch?a 10 "ph?n" và m?i "ph?n" có 300 calo

    // Nh?p s? lý?ng bánh quy ð? ãn
    int so_banh_quy_an;
    std::cout << "Nhap so luong banh quy ban da an: ";
    std::cin >> so_banh_quy_an;

    // Tính toán t?ng lý?ng calo ð? tiêu th?
    double tong_calo_tieu_thu = (static_cast<double>(so_banh_quy_an) / so_banh_quy_tren_tui) * calo_tren_tui;

    // Hi?n th? t?ng lý?ng calo
    std::cout << "Tong luong calo da tieu thu la: " << static_cast<int>(tong_calo_tieu_thu) << " calo" << std::endl;

    return 0;
}
