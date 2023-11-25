#include <iostream>
using namespace std;

int main() {
    // Hi?n th? tiêu ð? b?ng
    cout << "Celsius  Fahrenheit" << endl;
    cout << "------------------" << endl;

    // V?ng l?p qua nhi?t ð? Celsius t? 0 ð?n 20
    for (int celsius = 0; celsius <= 20; celsius++) {
        // Chuy?n ð?i Celsius sang Fahrenheit
        double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

        // Hi?n th? nhi?t ð? trong b?ng
        cout << celsius << "\t  " << fahrenheit << endl;
    }

    return 0;
}
