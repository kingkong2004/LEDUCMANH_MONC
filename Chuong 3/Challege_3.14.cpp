#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // Khai báo bi?n cho tháng, nãm và t?ng s? ti?n thu
    string thang;
    int nam;
    double tong_thu;

    // H?ng s? thu?
    const double ty_le_thue_bang = 0.04;
    const double ty_le_thue_quan = 0.02;
    const double ty_le_thue_tong = 0.06;

    // Yêu c?u ngý?i dùng nh?p thông tin
    cout << "Nh?p tháng: ";
    getline(cin, thang);
    cout << "Nh?p nãm: ";
    cin >> nam;
    cout << "Nh?p t?ng s? ti?n thu (t?ng s? ti?n thu + thu?): $";
    cin >> tong_thu;

    // Tính toán s? ti?n bán hàng
    double doanh_so = tong_thu / (1 + ty_le_thue_tong);

    // Tính toán thu? qu?n và thu? bang
    double thue_ban_hang_quan = doanh_so * ty_le_thue_quan;
    double thue_ban_hang_bang = doanh_so * ty_le_thue_bang;

    // Hi?n th? báo cáo
    cout << "\nTháng: " << thang << endl;
    cout << "--------------------" << endl;
    cout << "T?ng s? ti?n thu: $" << fixed << setprecision(2) << tong_thu << endl;
    cout << "S? ti?n bán hàng: $" << doanh_so << endl;
    cout << "Thu? bán hàng qu?n: $" << thue_ban_hang_quan << endl;
    cout << "Thu? bán hàng bang: $" << thue_ban_hang_bang << endl;
    cout << "T?ng thu? bán hàng: $" << thue_ban_hang_quan + thue_ban_hang_bang << endl;

    return 0;
}
