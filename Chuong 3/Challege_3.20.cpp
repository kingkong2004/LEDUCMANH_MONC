#include <iostream>
#include <cmath> // S? d?ng hàm pow
#include <iomanip> // Ð? s? d?ng std::fixed và std::setprecision
using namespace std;

int main() {
    // Khai báo h?ng s? cho giá tr? pi
    const double pi = 3.14159;

    // Khai báo bi?n cho ðý?ng kính và bán kính c?a pizza, c?ng nhý s? lát pizza
    double duong_kinh, ban_kinh, so_lat_pizza;

    // Yêu c?u ngý?i dùng nh?p ðý?ng kính c?a pizza trong inches
    cout << "Nh?p ðý?ng kính c?a pizza (inches): ";
    cin >> duong_kinh;

    // Tính bán kính t? ðý?ng kính
    ban_kinh = duong_kinh / 2;

    // Tính di?n tích c?a pizza s? d?ng công th?c ? * r^2
    double dien_tich_pizza = pi * pow(ban_kinh, 2);

    // Tính s? lát pizza b?ng cách chia di?n tích pizza cho di?n tích c?a m?t lát
    so_lat_pizza = dien_tich_pizza / 14.125;

    // Hi?n th? k?t qu? v?i ð?nh d?ng c? ð?nh 1 ch? s? th?p phân
    cout << fixed << setprecision(1);

    // Hi?n th? s? lát pizza
    cout << "S? lát pizza có th? c?t: " << so_lat_pizza << endl;

    return 0;
}
