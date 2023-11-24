#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // H? s? chuy?n ð?i c? ð?nh
    const double YEN_PER_DOLLAR = 98.93;
    const double EUROS_PER_DOLLAR = 0.74;

    // Bi?n cho s? ti?n ð?u vào và k?t qu?
    double us_dollars, yen, euros;

    // Yêu c?u ngý?i dùng nh?p s? ti?n trong ðô la M?
    cout << "Nh?p s? ti?n trong ðô la M?: $";
    cin >> us_dollars;

    // Tính s? ti?n týõng ?ng trong yen và euro
    yen = us_dollars * YEN_PER_DOLLAR;
    euros = us_dollars * EUROS_PER_DOLLAR;

    // Hi?n th? k?t qu? v?i hai s? th?p phân
    cout << fixed << setprecision(2);
    cout << "S? ti?n týõng ?ng trong yen Nh?t B?n: " << yen << " Yen" << endl;
    cout << "S? ti?n týõng ?ng trong euro: " << euros << " Euro" << endl;

    return 0;
}
