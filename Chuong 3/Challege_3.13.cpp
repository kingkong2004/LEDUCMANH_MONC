#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // H? s? chuy?n �?i c? �?nh
    const double YEN_PER_DOLLAR = 98.93;
    const double EUROS_PER_DOLLAR = 0.74;

    // Bi?n cho s? ti?n �?u v�o v� k?t qu?
    double us_dollars, yen, euros;

    // Y�u c?u ng�?i d�ng nh?p s? ti?n trong �� la M?
    cout << "Nh?p s? ti?n trong �� la M?: $";
    cin >> us_dollars;

    // T�nh s? ti?n t��ng ?ng trong yen v� euro
    yen = us_dollars * YEN_PER_DOLLAR;
    euros = us_dollars * EUROS_PER_DOLLAR;

    // Hi?n th? k?t qu? v?i hai s? th?p ph�n
    cout << fixed << setprecision(2);
    cout << "S? ti?n t��ng ?ng trong yen Nh?t B?n: " << yen << " Yen" << endl;
    cout << "S? ti?n t��ng ?ng trong euro: " << euros << " Euro" << endl;

    return 0;
}
