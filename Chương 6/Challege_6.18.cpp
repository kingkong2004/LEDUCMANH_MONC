#include <iostream>
using namespace std;

const int NUM_JUDGES = 5; // S? l�?ng gi�m kh?o

// H�m y�u c?u ng�?i d�ng nh?p �i?m c?a gi�m kh?o v� x�c th?c n�
void getJudgeData(double &score) {
    do {
        cout << "Nh?p �i?m c?a gi�m kh?o: ";
        cin >> score;
        if (score < 0 || score > 10) {
            cout << "�i?m kh�ng h?p l?. H?y nh?p l?i." << endl;
        }
    } while (score < 0 || score > 10);
}

// H�m t?m v� tr? v? �i?m th?p nh?t trong danh s�ch �i?m
double findLowest(const double scores[]) {
    double lowest = scores[0];
    for (int i = 1; i < NUM_JUDGES; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    return lowest;
}

// H�m t?m v� tr? v? �i?m cao nh?t trong danh s�ch �i?m
double findHighest(const double scores[]) {
    double highest = scores[0];
    for (int i = 1; i < NUM_JUDGES; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
        }
    }
    return highest;
}

// H�m t�nh v� hi?n th? gi� tr? trung b?nh c?a ba �i?m gi? nguy�n sau khi lo?i b? �i?m cao nh?t v� th?p nh?t
void calcScore(const double scores[]) {
    double lowest = findLowest(scores);
    double highest = findHighest(scores);
    double sum = 0;

    // T�nh t?ng �i?m (lo?i b? �i?m cao nh?t v� th?p nh?t)
    for (int i = 0; i < NUM_JUDGES; i++) {
        if (scores[i] != lowest && scores[i] != highest) {
            sum += scores[i];
        }
    }

    // T�nh �i?m cu?i c�ng v� hi?n th?
    double finalScore = sum / (NUM_JUDGES - 2); // B? �i?m cao nh?t v� th?p nh?t
    cout << "�i?m cu?i c�ng c?a th� sinh: " << finalScore << endl;
}

int main() {
    double judgeScores[NUM_JUDGES];

    // Nh?p �i?m t?ng gi�m kh?o
    for (int i = 0; i < NUM_JUDGES; i++) {
        getJudgeData(judgeScores[i]);
    }

    // T�nh v� hi?n th? �i?m cu?i c�ng
    calcScore(judgeScores);

    return 0;
}
