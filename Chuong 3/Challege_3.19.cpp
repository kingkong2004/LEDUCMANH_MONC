#include <iostream>
#include <cmath> // �? s? d?ng h�m pow
#include <iomanip> // �? s? d?ng std::fixed v� std::setprecision
using namespace std;

int main() {
    // Khai b�o bi?n cho s? ti?n vay, l?i su?t h�ng th�ng, s? l?n tr? g�p, v� s? ti?n tr? h�ng th�ng
    double so_tien_vay, lai_suat, so_lan_tra_gop, so_tien_tra_hang_thang;

    // Y�u c?u ng�?i d�ng nh?p s? ti?n vay, l?i su?t h�ng th�ng v� s? l?n tr? g�p
    cout << "S? ti?n vay: $";
    cin >> so_tien_vay;

    cout << "L?i su?t h�ng th�ng (d?ng ph?n tr�m): ";
    cin >> lai_suat;

    cout << "S? l?n tr? g�p: ";
    cin >> so_lan_tra_gop;

    // Chuy?n l?i su?t h�ng th�ng t? ph?n tr�m sang �?nh d?ng th?p ph�n
    lai_suat /= 100;

    // T�nh s? ti?n tr? h�ng th�ng
    so_tien_tra_hang_thang = (lai_suat * so_tien_vay) / (1 - pow(1 + lai_suat, -so_lan_tra_gop));

    // T�nh t?ng s? ti?n tr? v� t?ng s? ti?n l?i
    double tong_so_tien_tra = so_tien_tra_hang_thang * so_lan_tra_gop;
    double tong_so_tien_lai = tong_so_tien_tra - so_tien_vay;

    // Hi?n th? k?t qu? v?i �?nh d?ng c? �?nh 2 ch? s? th?p ph�n
    cout << fixed << setprecision(2);

    // Hi?n th? b�o c�o
    cout << "S? ti?n vay: $" << so_tien_vay << endl;
    cout << "L?i su?t h�ng th�ng: " << lai_suat * 100 << "%" << endl;
    cout << "S? l?n tr? g�p: " << so_lan_tra_gop << endl;
    cout << "S? ti?n tr? h�ng th�ng: $" << so_tien_tra_hang_thang << endl;
    cout << "T?ng s? ti?n tr?: $" << tong_so_tien_tra << endl;
    cout << "T?ng s? ti?n l?i tr?: $" << tong_so_tien_lai << endl;

    return 0;
}
