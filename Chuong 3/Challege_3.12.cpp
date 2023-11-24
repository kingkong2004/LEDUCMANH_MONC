#include <iostream>
using namespace std;

int main() {
    // Khai báo bi?n cho nhiet do Celsius và Fahrenheit
    double celsius, fahrenheit;

    // Yêu c?u ngý?i dùng nh?p nhi?t ð? Celsius
    cout << "Nhap nhiet do Celsius: ";
    cin >> celsius;

    // Tính toán nhi?t ð? Fahrenheit
    fahrenheit = (9.0 / 5) * celsius + 32;

    // Hi?n th? nhi?t ð? Fahrenheit
    cout << "Nhi?t do Fahrenheit tuong ung la: " << fahrenheit << " do Fahrenheit" << endl;

    return 0;
}
