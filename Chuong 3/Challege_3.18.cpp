#include <iostream>
#include <cmath> // �? s? d?ng h�m pow
#include <iomanip> // �? s? d?ng std::fixed v� std::setprecision
using namespace std;

int main() {
    // Khai b�o bi?n cho s? d� ban �?u, l?i su?t v� s? l?n l?i su?t ��?c t�nh to�n
    double so_du_ban_dau, lai_suat, so_lan_lai_suat;

    // Y�u c?u ng�?i d�ng nh?p s? d� ban �?u, l?i su?t v� s? l?n l?i su?t ��?c t�nh to�n
    cout << "S? d� ban �?u: $";
    cin >> so_du_ban_dau;

    cout << "L?i su?t (d?ng ph?n tr�m): ";
    cin >> lai_suat;

    cout << "S? l?n l?i su?t ��?c t�nh to�n trong m?t n�m: ";
    cin >> so_lan_lai_suat;

    // Chuy?n l?i su?t t? ph?n tr�m sang �?nh d?ng th?p ph�n
    lai_suat /= 100;

    // T�nh s? ti?n trong t�i kho?n ti?t ki?m sau m?t n�m
    double so_tien = so_du_ban_dau * pow(1 + (lai_suat / so_lan_lai_suat), so_lan_lai_suat);

    // Hi?n th? k?t qu? v?i �?nh d?ng c? �?nh 2 ch? s? th?p ph�n
    cout << fixed << setprecision(2);

    // Hi?n th? b�o c�o
    cout << "L?i su?t: " << lai_suat * 100 << "%" << endl;
    cout << "S? l?n l?i su?t ��?c t�nh to�n: " << so_lan_lai_suat << endl;
    cout << "S? d� ban �?u: $" << so_du_ban_dau << endl;
    cout << "L?i su?t: $" << so_tien - so_du_ban_dau << endl;
    cout << "S? ti?n trong t�i kho?n ti?t ki?m: $" << so_tien << endl;

    return 0;
}
