#include <iostream>
using namespace std;

const int NUM_SCORES = 5; // S? lý?ng ði?m ki?m tra

// Hàm yêu c?u ngý?i dùng nh?p ði?m ki?m tra và xác th?c nó
void getScore(double &score) {
    do {
        cout << "Nh?p m?t ði?m ki?m tra: ";
        cin >> score;
        if (score < 0 || score > 100) {
            cout << "Ði?m không h?p l?. H?y nh?p l?i." << endl;
        }
    } while (score < 0 || score > 100);
}

// Hàm t?m và tr? v? ði?m th?p nh?t trong danh sách ði?m
double findLowest(const double scores[]) {
    double lowest = scores[0];
    for (int i = 1; i < NUM_SCORES; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    return lowest;
}

// Hàm tính và hi?n th? giá tr? trung b?nh c?a 4 ði?m cao nh?t
void calcAverage(const double scores[]) {
    double lowest = findLowest(scores);
    double sum = 0;
    for (int i = 0; i < NUM_SCORES; i++) {
        if (scores[i] != lowest) {
            sum += scores[i];
        }
    }
    double average = sum / (NUM_SCORES - 1);
    cout << "Ði?m trung b?nh c?a 4 ði?m cao nh?t: " << average << endl;
}

int main() {
    double scores[NUM_SCORES];

    // Nh?p ði?m cho t?ng ki?m tra
    for (int i = 0; i < NUM_SCORES; i++) {
        getScore(scores[i]);
    }

    // Tính và hi?n th? ði?m trung b?nh c?a 4 ði?m cao nh?t
    calcAverage(scores);

    return 0;
}
