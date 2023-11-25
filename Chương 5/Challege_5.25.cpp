#include <iostream>
#include <fstream>
using namespace std;

int main() {
    double laiSuatHangNam, soDuBanDau, tienGuiHangThang;
    int soThang;

    cout << "Nh?p t? l? l?i su?t hàng nãm (dý?i d?ng s? th?p phân): ";
    cin >> laiSuatHangNam;
    cout << "Nh?p s? dý ban ð?u: ";
    cin >> soDuBanDau;
    cout << "Nh?p s? ti?n g?i hàng tháng: ";
    cin >> tienGuiHangThang;
    cout << "Nh?p s? tháng: ";
    cin >> soThang;

    ofstream t?pK?tQu?("BáoCáoS?Dý.txt");

    if (!t?pK?tQu?.is_open()) {
        cerr << "L?i: Không th? m? t?p ð?u ra." << endl;
        return 1;
    }
    t?pK?tQu? << "Tháng\tS? Dý Ban Ð?u\tTi?n G?i Hàng Tháng\tL?i Su?t\tS? Dý Cu?i Cùng" << endl;
    double soDu = soDuBanDau;
    for (int thang = 1; thang <= soThang; thang++) {
        double laiSuat = (soDu + tienGuiHangThang) * (laiSuatHangNam / 12.0);
        soDu += tienGuiHangThang + laiSuat;
        t?pK?tQu? << thang << "\t" << soDuBanDau << "\t" << tienGuiHangThang << "\t" << laiSuat << "\t" << soDu << endl;
    }

    t?pK?tQu?.close();

    cout << "Báo cáo s? dý ð? ðý?c ghi vào 'BáoCáoS?Dý.txt'." << endl;

    return 0;
}
