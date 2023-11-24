#include <iostream>
#include <cmath> // S? d?ng h�m pow
#include <iomanip> // �? s? d?ng std::fixed v� std::setprecision
using namespace std;

int main() {
    // Khai b�o h?ng s? cho gi� tr? pi
    const double pi = 3.14159;

    // Khai b�o bi?n cho ��?ng k�nh v� b�n k�nh c?a pizza, c?ng nh� s? l�t pizza
    double duong_kinh, ban_kinh, so_lat_pizza;

    // Y�u c?u ng�?i d�ng nh?p ��?ng k�nh c?a pizza trong inches
    cout << "Nh?p ��?ng k�nh c?a pizza (inches): ";
    cin >> duong_kinh;

    // T�nh b�n k�nh t? ��?ng k�nh
    ban_kinh = duong_kinh / 2;

    // T�nh di?n t�ch c?a pizza s? d?ng c�ng th?c ? * r^2
    double dien_tich_pizza = pi * pow(ban_kinh, 2);

    // T�nh s? l�t pizza b?ng c�ch chia di?n t�ch pizza cho di?n t�ch c?a m?t l�t
    so_lat_pizza = dien_tich_pizza / 14.125;

    // Hi?n th? k?t qu? v?i �?nh d?ng c? �?nh 1 ch? s? th?p ph�n
    cout << fixed << setprecision(1);

    // Hi?n th? s? l�t pizza
    cout << "S? l�t pizza c� th? c?t: " << so_lat_pizza << endl;

    return 0;
}
