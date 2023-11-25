#include <iostream>
using namespace std;

int main() {
    int startingPopulation;
    double dailyIncreasePercentage;
    int numberOfDays;

    // Nh?p th�ng tin v?i ki?m tra �?u v�o
    do {
        cout << "Nh?p s? l�?ng h?u c� ban �?u (�t nh?t 2): ";
        cin >> startingPopulation;

        if (startingPopulation < 2) {
            cout << "S? l�?ng h?u c� ban �?u kh�ng h?p l?. Vui l?ng nh?p s? l?n h�n ho?c b?ng 2." << endl;
        }
    } while (startingPopulation < 2);

    do {
        cout << "Nh?p t? l? t�ng d�n s? h�ng ng�y (d�?i d?ng ph?n tr�m, kh�ng �m): ";
        cin >> dailyIncreasePercentage;

        if (dailyIncreasePercentage < 0) {
            cout << "T? l? t�ng d�n s? h�ng ng�y kh�ng h?p l?. Vui l?ng nh?p s? kh�ng �m." << endl;
        }
    } while (dailyIncreasePercentage < 0);

    do {
        cout << "Nh?p s? ng�y m� h?u c� s? t�ng (�t nh?t 1): ";
        cin >> numberOfDays;

        if (numberOfDays < 1) {
            cout << "S? ng�y ph?i �t nh?t l� 1. Vui l?ng nh?p s? l?n h�n ho?c b?ng 1." << endl;
        }
    } while (numberOfDays < 1);

    // Hi?n th? k�ch th�?c d�n s? h�ng ng�y
    cout << "\nK�ch th�?c d�n s? h�ng ng�y:\n";
    for (int day = 1; day <= numberOfDays; day++) {
        cout << "Ng�y " << day << ": " << startingPopulation << " h?u c�\n";
        startingPopulation += startingPopulation * (dailyIncreasePercentage / 100);
    }

    return 0;
}
