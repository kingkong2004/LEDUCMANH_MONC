#include <iostream>
#include <cmath> // Ð? s? d?ng hàm pow
#include <iomanip> // Ð? s? d?ng std::fixed và std::setprecision
using namespace std;

int main() {
    // Khai báo bi?n cho s? dý ban ð?u, l?i su?t và s? l?n l?i su?t ðý?c tính toán
    double so_du_ban_dau, lai_suat, so_lan_lai_suat;

    // Yêu c?u ngý?i dùng nh?p s? dý ban ð?u, l?i su?t và s? l?n l?i su?t ðý?c tính toán
    cout << "S? dý ban ð?u: $";
    cin >> so_du_ban_dau;

    cout << "L?i su?t (d?ng ph?n trãm): ";
    cin >> lai_suat;

    cout << "S? l?n l?i su?t ðý?c tính toán trong m?t nãm: ";
    cin >> so_lan_lai_suat;

    // Chuy?n l?i su?t t? ph?n trãm sang ð?nh d?ng th?p phân
    lai_suat /= 100;

    // Tính s? ti?n trong tài kho?n ti?t ki?m sau m?t nãm
    double so_tien = so_du_ban_dau * pow(1 + (lai_suat / so_lan_lai_suat), so_lan_lai_suat);

    // Hi?n th? k?t qu? v?i ð?nh d?ng c? ð?nh 2 ch? s? th?p phân
    cout << fixed << setprecision(2);

    // Hi?n th? báo cáo
    cout << "L?i su?t: " << lai_suat * 100 << "%" << endl;
    cout << "S? l?n l?i su?t ðý?c tính toán: " << so_lan_lai_suat << endl;
    cout << "S? dý ban ð?u: $" << so_du_ban_dau << endl;
    cout << "L?i su?t: $" << so_tien - so_du_ban_dau << endl;
    cout << "S? ti?n trong tài kho?n ti?t ki?m: $" << so_tien << endl;

    return 0;
}
