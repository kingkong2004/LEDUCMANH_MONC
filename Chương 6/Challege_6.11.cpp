#include <iostream>
using namespace std;

const int NUM_SCORES = 5; // S? l�?ng �i?m ki?m tra

// H�m y�u c?u ng�?i d�ng nh?p �i?m ki?m tra v� x�c th?c n�
void getScore(double &score) {
    do {
        cout << "Nh?p m?t �i?m ki?m tra: ";
        cin >> score;
        if (score < 0 || score > 100) {
            cout << "�i?m kh�ng h?p l?. H?y nh?p l?i." << endl;
        }
    } while (score < 0 || score > 100);
}

// H�m t?m v� tr? v? �i?m th?p nh?t trong danh s�ch �i?m
double findLowest(const double scores[]) {
    double lowest = scores[0];
    for (int i = 1; i < NUM_SCORES; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    return lowest;
}

// H�m t�nh v� hi?n th? gi� tr? trung b?nh c?a 4 �i?m cao nh?t
void calcAverage(const double scores[]) {
    double lowest = findLowest(scores);
    double sum = 0;
    for (int i = 0; i < NUM_SCORES; i++) {
        if (scores[i] != lowest) {
            sum += scores[i];
        }
    }
    double average = sum / (NUM_SCORES - 1);
    cout << "�i?m trung b?nh c?a 4 �i?m cao nh?t: " << average << endl;
}

int main() {
    double scores[NUM_SCORES];

    // Nh?p �i?m cho t?ng ki?m tra
    for (int i = 0; i < NUM_SCORES; i++) {
        getScore(scores[i]);
    }

    // T�nh v� hi?n th? �i?m trung b?nh c?a 4 �i?m cao nh?t
    calcAverage(scores);

    return 0;
}
