#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// H�m m� ph?ng vi?c tung �?ng xu
void coinToss() {
    int random = rand() % 2 + 1;
    if (random == 1) {
        cout << "�?u" << endl;
    } else {
        cout << "�u�i" << endl;
    }
}

int main() {
    // Kh?i t?o b? ng?u nhi�n
    srand(static_cast<unsigned>(time(0)));

    int numTosses;
    cout << "Nh?p s? l?n tung �?ng xu: ";
    cin >> numTosses;

    cout << "K?t qu? tung �?ng xu " << numTosses << " l?n:" << endl;
    for (int i = 0; i < numTosses; i++) {
        cout << "L?n " << i + 1 << ": ";
        coinToss();
    }

    return 0;
}
