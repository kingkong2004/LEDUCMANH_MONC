#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // Khai b�o bi?n cho th�ng, n�m v� t?ng s? ti?n thu
    string thang;
    int nam;
    double tong_thu;

    // H?ng s? thu?
    const double ty_le_thue_bang = 0.04;
    const double ty_le_thue_quan = 0.02;
    const double ty_le_thue_tong = 0.06;

    // Y�u c?u ng�?i d�ng nh?p th�ng tin
    cout << "Nh?p th�ng: ";
    getline(cin, thang);
    cout << "Nh?p n�m: ";
    cin >> nam;
    cout << "Nh?p t?ng s? ti?n thu (t?ng s? ti?n thu + thu?): $";
    cin >> tong_thu;

    // T�nh to�n s? ti?n b�n h�ng
    double doanh_so = tong_thu / (1 + ty_le_thue_tong);

    // T�nh to�n thu? qu?n v� thu? bang
    double thue_ban_hang_quan = doanh_so * ty_le_thue_quan;
    double thue_ban_hang_bang = doanh_so * ty_le_thue_bang;

    // Hi?n th? b�o c�o
    cout << "\nTh�ng: " << thang << endl;
    cout << "--------------------" << endl;
    cout << "T?ng s? ti?n thu: $" << fixed << setprecision(2) << tong_thu << endl;
    cout << "S? ti?n b�n h�ng: $" << doanh_so << endl;
    cout << "Thu? b�n h�ng qu?n: $" << thue_ban_hang_quan << endl;
    cout << "Thu? b�n h�ng bang: $" << thue_ban_hang_bang << endl;
    cout << "T?ng thu? b�n h�ng: $" << thue_ban_hang_quan + thue_ban_hang_bang << endl;

    return 0;
}
