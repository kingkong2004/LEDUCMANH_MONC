#include <iostream>
using namespace std;

int main() {
    double num1, num2, quotient;

    // Nh?p s? th? nh?t.
    cout << "Nh?p m?t s?: ";
    cin >> num1;

    // Nh?p s? th? hai.
    cout << "Nh?p m?t s? kh�c: ";
    cin >> num2;

    // N?u num2 kh�ng b?ng 0, th?c hi?n ph�p chia.
    if (num2 == 0) {
        cout << "Kh�ng th? th?c hi?n ph�p chia cho 0.\n";
        cout << "Vui l?ng ch?y ch��ng tr?nh l?i v� nh?p\n";
        cout << "m?t s? kh�c 0.\n";
    } else {
        quotient = num1 / num2;
        cout << "Th��ng c?a " << num1 << " chia cho ";
        cout << num2 << " l� " << quotient << ".\n";
    }

    return 0;
}
