#include <iostream>

// Hàm tính l?i nhu?n ho?c l? t? vi?c bán c? phi?u
double tinhLoiNhuan(int soLuongCoPhieu, double giaMua, double hoaHongMua, double giaBan, double hoaHongBan) {
    double loiNhuan = (soLuongCoPhieu * giaBan - hoaHongBan) - (soLuongCoPhieu * giaMua + hoaHongMua);
    return loiNhuan;
}

int main() {
    int soLuongCoPhieu;
    double giaMua, hoaHongMua, giaBan, hoaHongBan;

    // Nh?p thông tin t? ngý?i dùng
    std::cout << "Nh?p s? lý?ng c? phi?u: ";
    std::cin >> soLuongCoPhieu;
    std::cout << "Nh?p giá mua m?i c? phi?u: $";
    std::cin >> giaMua;
    std::cout << "Nh?p hoa h?ng mua hàng ðý?c tr?: $";
    std::cin >> hoaHongMua;
    std::cout << "Nh?p giá bán m?i c? phi?u: $";
    std::cin >> giaBan;
    std::cout << "Nh?p hoa h?ng bán hàng ðý?c tr?: $";
    std::cin >> hoaHongBan;

    // G?i hàm ð? tính l?i nhu?n ho?c l?
    double ketQua = tinhLoiNhuan(soLuongCoPhieu, giaMua, hoaHongMua, giaBan, hoaHongBan);

    // Hi?n th? k?t qu?
    if (ketQua > 0) {
        std::cout << "L?i nhu?n: $" << ketQua << std::endl;
    } else if (ketQua < 0) {
        std::cout << "L?: $" << -ketQua << std::endl;
    } else {
        std::cout << "Không có l?i nhu?n ho?c l?." << std::endl;
    }

    return 0;
}
