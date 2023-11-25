#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int soNgauNhien = rand() % 100 + 1;

    int doan;
    int soLanThucHien = 0;

    cout << "H?y ðoán s? ng?u nhiên trong kho?ng t? 1 ð?n 100." << endl;

    do {
        cout << "Nh?p s? ðoán c?a b?n: ";
        cin >> doan;
        soLanThucHien++;

        if (doan < soNgauNhien) {
            cout << "Quá th?p, h?y th? l?i." << endl;
        } else if (doan > soNgauNhien) {
            cout << "Quá cao, h?y th? l?i." << endl;
        } else {
            cout << "Chúc m?ng! B?n ð? ðoán ðúng s? (" << soNgauNhien << ") sau " << soLanThucHien << " l?n ðoán." << endl;
        }
    } while (doan != soNgauNhien);

    return 0;
}
 

