#include <iostream>
using namespace std;

int main() {
    double num1, num2, quotient;

    // Nh?p s? th? nh?t.
    cout << "Nh?p m?t s?: ";
    cin >> num1;

    // Nh?p s? th? hai.
    cout << "Nh?p m?t s? khác: ";
    cin >> num2;

    // N?u num2 không b?ng 0, th?c hi?n phép chia.
    if (num2 == 0) {
        cout << "Không th? th?c hi?n phép chia cho 0.\n";
        cout << "Vui l?ng ch?y chýõng tr?nh l?i và nh?p\n";
        cout << "m?t s? khác 0.\n";
    } else {
        quotient = num1 / num2;
        cout << "Thýõng c?a " << num1 << " chia cho ";
        cout << num2 << " là " << quotient << ".\n";
    }

    return 0;
}
