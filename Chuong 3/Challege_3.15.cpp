#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // H?ng s? cho giá tr? ðánh giá và thu? b?t ð?ng s?n
    const double ty_le_danh_gia = 0.6;
    const double ty_le_thue = 0.75;

    // Bi?n cho giá tr? th?c t? và thu? b?t ð?ng s?n
    double gia_tri_thuc_te, gia_tri_danh_gia, thue_bat_dong_san;

    // Yêu c?u ngý?i dùng nh?p giá tr? th?c t? c?a b?t ð?ng s?n
    cout << "Nh?p giá tr? th?c t? c?a b?t ð?ng s?n: $";
    cin >> gia_tri_thuc_te;

    // Tính giá tr? ðánh giá và thu? b?t ð?ng s?n
    gia_tri_danh_gia = gia_tri_thuc_te * ty_le_danh_gia;
    thue_bat_dong_san = (gia_tri_danh_gia / 100) * ty_le_thue;

    // Hi?n th? giá tr? ðánh giá và thu? b?t ð?ng s?n
    cout << "Giá tr? ðánh giá c?a b?t ð?ng s?n: $" << fixed << setprecision(2) << gia_tri_danh_gia << endl;
    cout << "Thu? b?t ð?ng s?n: $" << fixed << setprecision(2) << thue_bat_dong_san << endl;

    return 0;
}
