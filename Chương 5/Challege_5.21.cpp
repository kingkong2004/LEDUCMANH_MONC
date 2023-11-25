#include <iostream>
using namespace std;

int main() {
    int doDaiCanh;

    // Yêu c?u ngý?i dùng nh?p và ki?m tra tính h?p l? c?a ð?u vào
    do {
        cout << "Nh?p m?t s? nguyên dýõng không l?n hõn 15: ";
        cin >> doDaiCanh;

        if (doDaiCanh <= 0 || doDaiCanh > 15) {
            cout << "Nh?p không h?p l?. Vui l?ng nh?p m?t s? nguyên dýõng không l?n hõn 15." << endl;
        }
    } while (doDaiCanh <= 0 || doDaiCanh > 15);

    // Hi?n th? h?nh vuông
    for (int i = 0; i < doDaiCanh; i++) {
        for (int j = 0; j < doDaiCanh; j++) {
            cout << 'X';
        }
        cout << endl;
    }

    return 0;
}
