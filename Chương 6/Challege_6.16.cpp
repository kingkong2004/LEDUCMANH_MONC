#include <iostream>
using namespace std;

// H�m t�nh quy m� d�n s? trong m?t n�m
int calculatePopulationSize(int initialPopulation, double birthRate, double deathRate) {
    if (initialPopulation < 2 || birthRate < 0 || deathRate < 0) {
        return -1; // D? li?u kh�ng h?p l?
    }
    return initialPopulation + (initialPopulation * birthRate) - (initialPopulation * deathRate);
}

int main() {
    int initialPopulation, numYears;
    double birthRate, deathRate;

    cout << "K�ch th�?c ban �?u c?a qu?n th?: ";
    cin >> initialPopulation;
    cout << "T? l? sinh h�ng n�m (%): ";
    cin >> birthRate;
    cout << "T? l? t? vong h�ng n�m (%): ";
    cin >> deathRate;
    cout << "S? n�m hi?n th?: ";
    cin >> numYears;

    if (initialPopulation < 2 || birthRate < 0 || deathRate < 0 || numYears < 1) {
        cout << "D? li?u kh�ng h?p l?." << endl;
        return 1;
    }

    for (int year = 1; year <= numYears; year++) {
        initialPopulation = calculatePopulationSize(initialPopulation, birthRate / 100, deathRate / 100);
        if (initialPopulation == -1) {
            cout << "D? li?u kh�ng h?p l?." << endl;
            return 1;
        }
        cout << "D�n s? sau " << year << " n�m: " << initialPopulation << endl;
    }

    return 0;
}
