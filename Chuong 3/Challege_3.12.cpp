#include <iostream>
using namespace std;

int main() {
    // Khai b�o bi?n cho nhiet do Celsius v� Fahrenheit
    double celsius, fahrenheit;

    // Y�u c?u ng�?i d�ng nh?p nhi?t �? Celsius
    cout << "Nhap nhiet do Celsius: ";
    cin >> celsius;

    // T�nh to�n nhi?t �? Fahrenheit
    fahrenheit = (9.0 / 5) * celsius + 32;

    // Hi?n th? nhi?t �? Fahrenheit
    cout << "Nhi?t do Fahrenheit tuong ung la: " << fahrenheit << " do Fahrenheit" << endl;

    return 0;
}
