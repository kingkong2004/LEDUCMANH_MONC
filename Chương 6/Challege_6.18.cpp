#include <iostream>
using namespace std;

const int NUM_JUDGES = 5; // S? lý?ng giám kh?o

// Hàm yêu c?u ngý?i dùng nh?p ði?m c?a giám kh?o và xác th?c nó
void getJudgeData(double &score) {
    do {
        cout << "Nh?p ði?m c?a giám kh?o: ";
        cin >> score;
        if (score < 0 || score > 10) {
            cout << "Ði?m không h?p l?. H?y nh?p l?i." << endl;
        }
    } while (score < 0 || score > 10);
}

// Hàm t?m và tr? v? ði?m th?p nh?t trong danh sách ði?m
double findLowest(const double scores[]) {
    double lowest = scores[0];
    for (int i = 1; i < NUM_JUDGES; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    return lowest;
}

// Hàm t?m và tr? v? ði?m cao nh?t trong danh sách ði?m
double findHighest(const double scores[]) {
    double highest = scores[0];
    for (int i = 1; i < NUM_JUDGES; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
        }
    }
    return highest;
}

// Hàm tính và hi?n th? giá tr? trung b?nh c?a ba ði?m gi? nguyên sau khi lo?i b? ði?m cao nh?t và th?p nh?t
void calcScore(const double scores[]) {
    double lowest = findLowest(scores);
    double highest = findHighest(scores);
    double sum = 0;

    // Tính t?ng ði?m (lo?i b? ði?m cao nh?t và th?p nh?t)
    for (int i = 0; i < NUM_JUDGES; i++) {
        if (scores[i] != lowest && scores[i] != highest) {
            sum += scores[i];
        }
    }

    // Tính ði?m cu?i cùng và hi?n th?
    double finalScore = sum / (NUM_JUDGES - 2); // B? ði?m cao nh?t và th?p nh?t
    cout << "Ði?m cu?i cùng c?a thí sinh: " << finalScore << endl;
}

int main() {
    double judgeScores[NUM_JUDGES];

    // Nh?p ði?m t?ng giám kh?o
    for (int i = 0; i < NUM_JUDGES; i++) {
        getJudgeData(judgeScores[i]);
    }

    // Tính và hi?n th? ði?m cu?i cùng
    calcScore(judgeScores);

    return 0;
}
