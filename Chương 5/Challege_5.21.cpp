#include <iostream>
using namespace std;

int main() {
    int doDaiCanh;

    // Y�u c?u ng�?i d�ng nh?p v� ki?m tra t�nh h?p l? c?a �?u v�o
    do {
        cout << "Nh?p m?t s? nguy�n d��ng kh�ng l?n h�n 15: ";
        cin >> doDaiCanh;

        if (doDaiCanh <= 0 || doDaiCanh > 15) {
            cout << "Nh?p kh�ng h?p l?. Vui l?ng nh?p m?t s? nguy�n d��ng kh�ng l?n h�n 15." << endl;
        }
    } while (doDaiCanh <= 0 || doDaiCanh > 15);

    // Hi?n th? h?nh vu�ng
    for (int i = 0; i < doDaiCanh; i++) {
        for (int j = 0; j < doDaiCanh; j++) {
            cout << 'X';
        }
        cout << endl;
    }

    return 0;
}
