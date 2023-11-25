#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Kh?i t?o tr?nh t?o s? ng?u nhi�n
    srand(time(0));

    // T?o m?t s? ng?u nhi�n trong kho?ng t? 1 �?n 100
    int soNgauNhien = rand() % 100 + 1;

    int doan;
    int lanThucHien = 0;

    cout << "H?y �o�n s? ng?u nhi�n trong kho?ng t? 1 �?n 100." << endl;

    do {
        cout << "Nh?p s? �o�n c?a b?n: ";
        cin >> doan;
        lanThucHien++;

        if (doan < soNgauNhien) {
            cout << "Qu� th?p, h?y th? l?i." << endl;
        } else if (doan > soNgauNhien) {
            cout << "Qu� cao, h?y th? l?i." << endl;
        } else {
            cout << "Ch�c m?ng! B?n �? �o�n ��ng s? (" << soNgauNhien << ") trong " << lanThucHien << " l?n th?." << endl;
        }
    } while (doan != soNgauNhien);

    return 0;
}
