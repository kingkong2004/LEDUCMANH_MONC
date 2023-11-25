#include <iostream>
using namespace std;

// Hàm tính quy mô dân s? trong m?t nãm
int calculatePopulationSize(int initialPopulation, double birthRate, double deathRate) {
    if (initialPopulation < 2 || birthRate < 0 || deathRate < 0) {
        return -1; // D? li?u không h?p l?
    }
    return initialPopulation + (initialPopulation * birthRate) - (initialPopulation * deathRate);
}

int main() {
    int initialPopulation, numYears;
    double birthRate, deathRate;

    cout << "Kích thý?c ban ð?u c?a qu?n th?: ";
    cin >> initialPopulation;
    cout << "T? l? sinh hàng nãm (%): ";
    cin >> birthRate;
    cout << "T? l? t? vong hàng nãm (%): ";
    cin >> deathRate;
    cout << "S? nãm hi?n th?: ";
    cin >> numYears;

    if (initialPopulation < 2 || birthRate < 0 || deathRate < 0 || numYears < 1) {
        cout << "D? li?u không h?p l?." << endl;
        return 1;
    }

    for (int year = 1; year <= numYears; year++) {
        initialPopulation = calculatePopulationSize(initialPopulation, birthRate / 100, deathRate / 100);
        if (initialPopulation == -1) {
            cout << "D? li?u không h?p l?." << endl;
            return 1;
        }
        cout << "Dân s? sau " << year << " nãm: " << initialPopulation << endl;
    }

    return 0;
}
