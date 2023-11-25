#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Hàm mô ph?ng vi?c tung ð?ng xu
void coinToss() {
    int random = rand() % 2 + 1;
    if (random == 1) {
        cout << "Ð?u" << endl;
    } else {
        cout << "Ðuôi" << endl;
    }
}

int main() {
    // Kh?i t?o b? ng?u nhiên
    srand(static_cast<unsigned>(time(0)));

    int numTosses;
    cout << "Nh?p s? l?n tung ð?ng xu: ";
    cin >> numTosses;

    cout << "K?t qu? tung ð?ng xu " << numTosses << " l?n:" << endl;
    for (int i = 0; i < numTosses; i++) {
        cout << "L?n " << i + 1 << ": ";
        coinToss();
    }

    return 0;
}
