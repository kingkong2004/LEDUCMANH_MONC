#include <iostream>
#include <fstream>
using namespace std;

int main() {
    double laiSuatHangNam, soDuBanDau, tienGuiHangThang;
    int soThang;

    cout << "Nh?p t? l? l?i su?t h�ng n�m (d�?i d?ng s? th?p ph�n): ";
    cin >> laiSuatHangNam;
    cout << "Nh?p s? d� ban �?u: ";
    cin >> soDuBanDau;
    cout << "Nh?p s? ti?n g?i h�ng th�ng: ";
    cin >> tienGuiHangThang;
    cout << "Nh?p s? th�ng: ";
    cin >> soThang;

    ofstream t?pK?tQu?("B�oC�oS?D�.txt");

    if (!t?pK?tQu?.is_open()) {
        cerr << "L?i: Kh�ng th? m? t?p �?u ra." << endl;
        return 1;
    }
    t?pK?tQu? << "Th�ng\tS? D� Ban �?u\tTi?n G?i H�ng Th�ng\tL?i Su?t\tS? D� Cu?i C�ng" << endl;
    double soDu = soDuBanDau;
    for (int thang = 1; thang <= soThang; thang++) {
        double laiSuat = (soDu + tienGuiHangThang) * (laiSuatHangNam / 12.0);
        soDu += tienGuiHangThang + laiSuat;
        t?pK?tQu? << thang << "\t" << soDuBanDau << "\t" << tienGuiHangThang << "\t" << laiSuat << "\t" << soDu << endl;
    }

    t?pK?tQu?.close();

    cout << "B�o c�o s? d� �? ��?c ghi v�o 'B�oC�oS?D�.txt'." << endl;

    return 0;
}
