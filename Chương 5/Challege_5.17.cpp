#include <iostream>
using namespace std;

int main() {
    double laiSuatHangNam, soDuBanDau;
    int soThangDaQua;

    cout << "Nh?p t? l? l?i su?t h�ng n�m (? d?ng th?p ph�n, v� d?: 0.05 cho 5%): ";
    cin >> laiSuatHangNam;

    cout << "Nh?p s? d� ban �?u: ";
    cin >> soDuBanDau;

    cout << "Nh?p s? th�ng �? tr�i qua: ";
    cin >> soThangDaQua;

    double soDu = soDuBanDau;
    double tongTienGui = 0, tongTienRut = 0, tongLaiSuat = 0;

    for (int thang = 1; thang <= soThangDaQua; thang++) {
        double tienGui, tienRut;

        cout << "Th�ng " << thang << endl;

        cout << "Nh?p s? ti?n g?i v�o t�i kho?n trong th�ng n�y (�m �? kh�ng g?i): ";
        cin >> tienGui;

        if (tienGui < 0) {
            cout << "Nh?p kh�ng h?p l?. Vui l?ng nh?p s? ti?n g?i kh�ng �m." << endl;
            thang--; // L?p l?i l?n n�y
            continue;
        }

        cout << "Nh?p s? ti?n r�t trong th�ng n�y (�m �? kh�ng r�t): ";
        cin >> tienRut;

        if (tienRut < 0) {
            cout << "Nh?p kh�ng h?p l?. Vui l?ng nh?p s? ti?n r�t kh�ng �m." << endl;
            thang--; // L?p l?i l?n n�y
            continue;
        }

        tongTienGui += tienGui;
        tongTienRut += tienRut;

        soDu = soDu + tienGui - tienRut;

        if (soDu < 0) {
            cout << "T�i kho?n �? ��ng do s? d� �m." << endl;
            break;
        }

        double laiSuatHangThang = (laiSuatHangNam / 12) * soDu;
        soDu += laiSuatHangThang;
        tongLaiSuat += laiSuatHangThang;
    }

    cout << "S? d� cu?i k?: $" << soDu << endl;
    cout << "T?ng s? ti?n g?i: $" << tongTienGui << endl;
    cout << "T?ng s? ti?n r�t: $" << tongTienRut << endl;
    cout << "T?ng l?i su?t ki?m ��?c: $" << tongLaiSuat << endl;

    return 0;
}
