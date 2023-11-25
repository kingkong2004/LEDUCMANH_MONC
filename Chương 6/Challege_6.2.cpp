#include <iostream>
#include <cmath>
using namespace std;

// H�m t�nh gi� tr? t��ng lai (F)
double FutureValue(double presentValue, double monthlyInterestRate, int numberOfMonths) {
    double futureValue = presentValue * pow(1 + monthlyInterestRate, numberOfMonths);
    return futureValue;
}

int main() {
    double presentValue;
    double annualInterestRate;
    int numberOfMonths;

    cout << "Nh?p gi� tr? hi?n t?i c?a t�i kho?n h�ng th�ng: $";
    cin >> presentValue;
    cout << "Nh?p l?i su?t h�ng th�ng (%): ";
    cin >> annualInterestRate;
    cout << "Nh?p s? th�ng: ";
    cin >> numberOfMonths;

    double monthlyInterestRate = annualInterestRate / 100 / 12; // Chuy?n l?i su?t h�ng th�ng th�nh d?ng ph?n tr�m

    // T�nh gi� tr? t��ng lai v� hi?n th?
    double futureValue = FutureValue(presentValue, monthlyInterestRate, numberOfMonths);
    cout << "Gi� tr? t��ng lai c?a t�i kho?n sau " << numberOfMonths << " th�ng l�: $" << futureValue << endl;

    return 0;
}
