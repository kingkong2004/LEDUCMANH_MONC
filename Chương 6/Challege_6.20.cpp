#include <iostream>

// H�m t�nh l?i nhu?n ho?c l? t? vi?c b�n c? phi?u
double tinhLoiNhuan(int soLuongCoPhieu, double giaMua, double hoaHongMua, double giaBan, double hoaHongBan) {
    double loiNhuan = (soLuongCoPhieu * giaBan - hoaHongBan) - (soLuongCoPhieu * giaMua + hoaHongMua);
    return loiNhuan;
}

int main() {
    int soLuongCoPhieu;
    double giaMua, hoaHongMua, giaBan, hoaHongBan;

    // Nh?p th�ng tin t? ng�?i d�ng
    std::cout << "Nh?p s? l�?ng c? phi?u: ";
    std::cin >> soLuongCoPhieu;
    std::cout << "Nh?p gi� mua m?i c? phi?u: $";
    std::cin >> giaMua;
    std::cout << "Nh?p hoa h?ng mua h�ng ��?c tr?: $";
    std::cin >> hoaHongMua;
    std::cout << "Nh?p gi� b�n m?i c? phi?u: $";
    std::cin >> giaBan;
    std::cout << "Nh?p hoa h?ng b�n h�ng ��?c tr?: $";
    std::cin >> hoaHongBan;

    // G?i h�m �? t�nh l?i nhu?n ho?c l?
    double ketQua = tinhLoiNhuan(soLuongCoPhieu, giaMua, hoaHongMua, giaBan, hoaHongBan);

    // Hi?n th? k?t qu?
    if (ketQua > 0) {
        std::cout << "L?i nhu?n: $" << ketQua << std::endl;
    } else if (ketQua < 0) {
        std::cout << "L?: $" << -ketQua << std::endl;
    } else {
        std::cout << "Kh�ng c� l?i nhu?n ho?c l?." << std::endl;
    }

    return 0;
}
