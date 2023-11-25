#include <iostream>
using namespace std;

// Hàm tính quy mô dân s? trong m?t nãm
int calculatePopulationSize(int initialPopulation, double birthRate, double deathRate, int immigration, int emigration) {
    if (initialPopulation < 2 || birthRate < 0 || deathRate < 0 || immigration < 0 || emigration < 0) {
        return -1; // D? li?u không h?p l?
    }
    return initialPopulation + (initialPopulation * birthRate) - (initialPopulation * deathRate) + immigration - emigration;
}

int main() {
    int initialPopulation, numYears;
    double birthRate, deathRate;
    int immigration, emigration;

    cout << "Kích thý?c ban ð?u c?a qu?n th?: ";
    cin >> initialPopulation;
    cout << "T? l? sinh hàng nãm (%): ";
    cin >> birthRate;
    cout << "T? l? t? vong hàng nãm (%): ";
    cin >> deathRate;
    cout << "S? ngý?i di chuy?n vào m?i nãm: ";
    cin >> immigration;
    cout << "S? ngý?i di chuy?n ra m?i nãm: ";
    cin >> emigration;

    cout << "D? ðoán dân s? trong bao nhiêu nãm? ";
    cin >> numYears;

    if (initialPopulation < 2 || birthRate < 0 || deathRate < 0 || immigration < 0 || emigration < 0 || numYears < 1) {
        cout << "D? li?u không h?p l?." << endl;
        return 1;
    }

    for (int year = 1; year <= numYears; year++) {
        initialPopulation = calculatePopulationSize(initialPopulation, birthRate / 100, deathRate / 100, immigration, emigration);
        if (initialPopulation == -1) {
            cout << "D? li?u không h?p l?." << endl;
            return 1;
        }
        cout << "Dân s? sau " << year << " nãm: " << initialPopulation << endl;
    }

    return 0;
}
