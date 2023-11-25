#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int soNgauNhien = rand() % 100 + 1;

    int doan;
    int soLanThucHien = 0;

    cout << "H?y �o�n s? ng?u nhi�n trong kho?ng t? 1 �?n 100." << endl;

    do {
        cout << "Nh?p s? �o�n c?a b?n: ";
        cin >> doan;
        soLanThucHien++;

        if (doan < soNgauNhien) {
            cout << "Qu� th?p, h?y th? l?i." << endl;
        } else if (doan > soNgauNhien) {
            cout << "Qu� cao, h?y th? l?i." << endl;
        } else {
            cout << "Ch�c m?ng! B?n �? �o�n ��ng s? (" << soNgauNhien << ") sau " << soLanThucHien << " l?n �o�n." << endl;
        }
    } while (doan != soNgauNhien);

    return 0;
}
 

