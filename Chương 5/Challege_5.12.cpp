#include <iostream>
using namespace std;

int main() {
    // Hi?n th? ti�u �? b?ng
    cout << "Celsius  Fahrenheit" << endl;
    cout << "------------------" << endl;

    // V?ng l?p qua nhi?t �? Celsius t? 0 �?n 20
    for (int celsius = 0; celsius <= 20; celsius++) {
        // Chuy?n �?i Celsius sang Fahrenheit
        double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

        // Hi?n th? nhi?t �? trong b?ng
        cout << celsius << "\t  " << fahrenheit << endl;
    }

    return 0;
}
