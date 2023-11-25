#include <iostream>
using namespace std;

int main() {
    double laiSuatHangNam, soDuBanDau;
    int soThangDaQua;

    cout << "Nh?p t? l? l?i su?t hàng nãm (? d?ng th?p phân, ví d?: 0.05 cho 5%): ";
    cin >> laiSuatHangNam;

    cout << "Nh?p s? dý ban ð?u: ";
    cin >> soDuBanDau;

    cout << "Nh?p s? tháng ð? trôi qua: ";
    cin >> soThangDaQua;

    double soDu = soDuBanDau;
    double tongTienGui = 0, tongTienRut = 0, tongLaiSuat = 0;

    for (int thang = 1; thang <= soThangDaQua; thang++) {
        double tienGui, tienRut;

        cout << "Tháng " << thang << endl;

        cout << "Nh?p s? ti?n g?i vào tài kho?n trong tháng này (âm ð? không g?i): ";
        cin >> tienGui;

        if (tienGui < 0) {
            cout << "Nh?p không h?p l?. Vui l?ng nh?p s? ti?n g?i không âm." << endl;
            thang--; // L?p l?i l?n này
            continue;
        }

        cout << "Nh?p s? ti?n rút trong tháng này (âm ð? không rút): ";
        cin >> tienRut;

        if (tienRut < 0) {
            cout << "Nh?p không h?p l?. Vui l?ng nh?p s? ti?n rút không âm." << endl;
            thang--; // L?p l?i l?n này
            continue;
        }

        tongTienGui += tienGui;
        tongTienRut += tienRut;

        soDu = soDu + tienGui - tienRut;

        if (soDu < 0) {
            cout << "Tài kho?n ð? ðóng do s? dý âm." << endl;
            break;
        }

        double laiSuatHangThang = (laiSuatHangNam / 12) * soDu;
        soDu += laiSuatHangThang;
        tongLaiSuat += laiSuatHangThang;
    }

    cout << "S? dý cu?i k?: $" << soDu << endl;
    cout << "T?ng s? ti?n g?i: $" << tongTienGui << endl;
    cout << "T?ng s? ti?n rút: $" << tongTienRut << endl;
    cout << "T?ng l?i su?t ki?m ðý?c: $" << tongLaiSuat << endl;

    return 0;
}
