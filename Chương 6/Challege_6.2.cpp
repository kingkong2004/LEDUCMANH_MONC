#include <iostream>
#include <cmath>
using namespace std;

// Hàm tính giá tr? týõng lai (F)
double FutureValue(double presentValue, double monthlyInterestRate, int numberOfMonths) {
    double futureValue = presentValue * pow(1 + monthlyInterestRate, numberOfMonths);
    return futureValue;
}

int main() {
    double presentValue;
    double annualInterestRate;
    int numberOfMonths;

    cout << "Nh?p giá tr? hi?n t?i c?a tài kho?n hàng tháng: $";
    cin >> presentValue;
    cout << "Nh?p l?i su?t hàng tháng (%): ";
    cin >> annualInterestRate;
    cout << "Nh?p s? tháng: ";
    cin >> numberOfMonths;

    double monthlyInterestRate = annualInterestRate / 100 / 12; // Chuy?n l?i su?t hàng tháng thành d?ng ph?n trãm

    // Tính giá tr? týõng lai và hi?n th?
    double futureValue = FutureValue(presentValue, monthlyInterestRate, numberOfMonths);
    cout << "Giá tr? týõng lai c?a tài kho?n sau " << numberOfMonths << " tháng là: $" << futureValue << endl;

    return 0;
}
