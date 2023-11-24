#include <iostream>

int main() {
    const int so_banh_quy_tren_tui = 30;
    const int calo_tren_tui = 3000;  // M?i t�i ch?a 10 "ph?n" v� m?i "ph?n" c� 300 calo

    // Nh?p s? l�?ng b�nh quy �? �n
    int so_banh_quy_an;
    std::cout << "Nhap so luong banh quy ban da an: ";
    std::cin >> so_banh_quy_an;

    // T�nh to�n t?ng l�?ng calo �? ti�u th?
    double tong_calo_tieu_thu = (static_cast<double>(so_banh_quy_an) / so_banh_quy_tren_tui) * calo_tren_tui;

    // Hi?n th? t?ng l�?ng calo
    std::cout << "Tong luong calo da tieu thu la: " << static_cast<int>(tong_calo_tieu_thu) << " calo" << std::endl;

    return 0;
}
