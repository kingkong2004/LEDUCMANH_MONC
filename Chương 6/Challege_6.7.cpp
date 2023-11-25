#include <iostream>
using namespace std;

double celsius(double fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

int main() {
    cout << "B?ng chuy?n ğ?i nhi?t ğ? t? Fahrenheit sang Celsius:" << endl;
    cout << "---------------------------------------------" << endl;

    for (int fahrenheit = 0; fahrenheit <= 20; fahrenheit++) {
        double celsiusTemp = celsius(fahrenheit);
        cout << fahrenheit << "°F = " << celsiusTemp << "°C" << endl;
    }

    return 0;
}
