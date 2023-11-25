#include <iostream>
using namespace std;

int main() {
    int startingPopulation;
    double dailyIncreasePercentage;
    int numberOfDays;

    // Nh?p thông tin v?i ki?m tra ð?u vào
    do {
        cout << "Nh?p s? lý?ng h?u cõ ban ð?u (ít nh?t 2): ";
        cin >> startingPopulation;

        if (startingPopulation < 2) {
            cout << "S? lý?ng h?u cõ ban ð?u không h?p l?. Vui l?ng nh?p s? l?n hõn ho?c b?ng 2." << endl;
        }
    } while (startingPopulation < 2);

    do {
        cout << "Nh?p t? l? tãng dân s? hàng ngày (dý?i d?ng ph?n trãm, không âm): ";
        cin >> dailyIncreasePercentage;

        if (dailyIncreasePercentage < 0) {
            cout << "T? l? tãng dân s? hàng ngày không h?p l?. Vui l?ng nh?p s? không âm." << endl;
        }
    } while (dailyIncreasePercentage < 0);

    do {
        cout << "Nh?p s? ngày mà h?u cõ s? tãng (ít nh?t 1): ";
        cin >> numberOfDays;

        if (numberOfDays < 1) {
            cout << "S? ngày ph?i ít nh?t là 1. Vui l?ng nh?p s? l?n hõn ho?c b?ng 1." << endl;
        }
    } while (numberOfDays < 1);

    // Hi?n th? kích thý?c dân s? hàng ngày
    cout << "\nKích thý?c dân s? hàng ngày:\n";
    for (int day = 1; day <= numberOfDays; day++) {
        cout << "Ngày " << day << ": " << startingPopulation << " h?u cõ\n";
        startingPopulation += startingPopulation * (dailyIncreasePercentage / 100);
    }

    return 0;
}
