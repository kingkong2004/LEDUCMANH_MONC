#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // H?ng s? cho gi� tr? ��nh gi� v� thu? b?t �?ng s?n
    const double ty_le_danh_gia = 0.6;
    const double ty_le_thue = 0.75;

    // Bi?n cho gi� tr? th?c t? v� thu? b?t �?ng s?n
    double gia_tri_thuc_te, gia_tri_danh_gia, thue_bat_dong_san;

    // Y�u c?u ng�?i d�ng nh?p gi� tr? th?c t? c?a b?t �?ng s?n
    cout << "Nh?p gi� tr? th?c t? c?a b?t �?ng s?n: $";
    cin >> gia_tri_thuc_te;

    // T�nh gi� tr? ��nh gi� v� thu? b?t �?ng s?n
    gia_tri_danh_gia = gia_tri_thuc_te * ty_le_danh_gia;
    thue_bat_dong_san = (gia_tri_danh_gia / 100) * ty_le_thue;

    // Hi?n th? gi� tr? ��nh gi� v� thu? b?t �?ng s?n
    cout << "Gi� tr? ��nh gi� c?a b?t �?ng s?n: $" << fixed << setprecision(2) << gia_tri_danh_gia << endl;
    cout << "Thu? b?t �?ng s?n: $" << fixed << setprecision(2) << thue_bat_dong_san << endl;

    return 0;
}
