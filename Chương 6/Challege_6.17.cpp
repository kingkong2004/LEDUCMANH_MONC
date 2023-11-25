#include <iostream>
using namespace std;

// H�m t�nh quy m� d�n s? trong m?t n�m
int calculatePopulationSize(int initialPopulation, double birthRate, double deathRate, int immigration, int emigration) {
    if (initialPopulation < 2 || birthRate < 0 || deathRate < 0 || immigration < 0 || emigration < 0) {
        return -1; // D? li?u kh�ng h?p l?
    }
    return initialPopulation + (initialPopulation * birthRate) - (initialPopulation * deathRate) + immigration - emigration;
}

int main() {
    int initialPopulation, numYears;
    double birthRate, deathRate;
    int immigration, emigration;

    cout << "K�ch th�?c ban �?u c?a qu?n th?: ";
    cin >> initialPopulation;
    cout << "T? l? sinh h�ng n�m (%): ";
    cin >> birthRate;
    cout << "T? l? t? vong h�ng n�m (%): ";
    cin >> deathRate;
    cout << "S? ng�?i di chuy?n v�o m?i n�m: ";
    cin >> immigration;
    cout << "S? ng�?i di chuy?n ra m?i n�m: ";
    cin >> emigration;

    cout << "D? �o�n d�n s? trong bao nhi�u n�m? ";
    cin >> numYears;

    if (initialPopulation < 2 || birthRate < 0 || deathRate < 0 || immigration < 0 || emigration < 0 || numYears < 1) {
        cout << "D? li?u kh�ng h?p l?." << endl;
        return 1;
    }

    for (int year = 1; year <= numYears; year++) {
        initialPopulation = calculatePopulationSize(initialPopulation, birthRate / 100, deathRate / 100, immigration, emigration);
        if (initialPopulation == -1) {
            cout << "D? li?u kh�ng h?p l?." << endl;
            return 1;
        }
        cout << "D�n s? sau " << year << " n�m: " << initialPopulation << endl;
    }

    return 0;
}
