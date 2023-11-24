#include <iostream>
#include <cmath> // Ð? s? d?ng hàm pow
#include <iomanip> // Ð? s? d?ng std::fixed và std::setprecision
using namespace std;

int main() {
    // Khai báo bi?n cho s? ti?n vay, l?i su?t hàng tháng, s? l?n tr? góp, và s? ti?n tr? hàng tháng
    double so_tien_vay, lai_suat, so_lan_tra_gop, so_tien_tra_hang_thang;

    // Yêu c?u ngý?i dùng nh?p s? ti?n vay, l?i su?t hàng tháng và s? l?n tr? góp
    cout << "S? ti?n vay: $";
    cin >> so_tien_vay;

    cout << "L?i su?t hàng tháng (d?ng ph?n trãm): ";
    cin >> lai_suat;

    cout << "S? l?n tr? góp: ";
    cin >> so_lan_tra_gop;

    // Chuy?n l?i su?t hàng tháng t? ph?n trãm sang ð?nh d?ng th?p phân
    lai_suat /= 100;

    // Tính s? ti?n tr? hàng tháng
    so_tien_tra_hang_thang = (lai_suat * so_tien_vay) / (1 - pow(1 + lai_suat, -so_lan_tra_gop));

    // Tính t?ng s? ti?n tr? và t?ng s? ti?n l?i
    double tong_so_tien_tra = so_tien_tra_hang_thang * so_lan_tra_gop;
    double tong_so_tien_lai = tong_so_tien_tra - so_tien_vay;

    // Hi?n th? k?t qu? v?i ð?nh d?ng c? ð?nh 2 ch? s? th?p phân
    cout << fixed << setprecision(2);

    // Hi?n th? báo cáo
    cout << "S? ti?n vay: $" << so_tien_vay << endl;
    cout << "L?i su?t hàng tháng: " << lai_suat * 100 << "%" << endl;
    cout << "S? l?n tr? góp: " << so_lan_tra_gop << endl;
    cout << "S? ti?n tr? hàng tháng: $" << so_tien_tra_hang_thang << endl;
    cout << "T?ng s? ti?n tr?: $" << tong_so_tien_tra << endl;
    cout << "T?ng s? ti?n l?i tr?: $" << tong_so_tien_lai << endl;

    return 0;
}
