#include <iostream>
#include <iomanip>
using namespace std;

// Nguy�n m?u h�m
void getTestScores(double[], int);
double getTotal(const double[], int);
double getLowest(const double[], int);

int main()
{
    const int SIZE = 4; // K�ch th�?c m?ng
    double testScores[SIZE], // M?ng c�c �i?m ki?m tra
        total, // T?ng �i?m
        lowestScore, // �i?m th?p nh?t
        average; // �i?m trung b?nh

    // Thi?t l?p �?nh d?ng �?u ra s? h?c.
    cout << fixed << showpoint << setprecision(1);

    // Nh?p �i?m ki?m tra t? ng�?i d�ng.
    getTestScores(testScores, SIZE);

    // T�nh t?ng �i?m ki?m tra.
    total = getTotal(testScores, SIZE);

    // L?y �i?m ki?m tra th?p nh?t.
    lowestScore = getLowest(testScores, SIZE);

    // Tr? �i?m th?p nh?t kh?i t?ng.
    total -= lowestScore;

    // T�nh �i?m trung b?nh. Chia cho (SIZE - 1) v? �i?m ki?m tra th?p nh?t �? b? lo?i b?.
    average = total / (SIZE - 1);

    // Hi?n th? �i?m trung b?nh.
    cout << "Trung b?nh v?i �i?m th?p nh?t b? lo?i b? l� " << average << ".\n";

    return 0;
}

// �?nh ngh?a h�m getTestScores
// H�m n�y l?y c�c �i?m ki?m tra t? ng�?i d�ng v� l�u tr? ch�ng trong m?ng.
void getTestScores(double scores[], int size)
{
    cout << "Nh?p " << size << " �i?m ki?m tra:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> scores[i];
    }
}

// �?nh ngh?a h�m getTotal
// H�m n�y t�nh t?ng c?a c�c �i?m ki?m tra trong m?ng.
double getTotal(const double scores[], int size)
{
    double total = 0.0;
    for (int i = 0; i < size; i++)
    {
        total += scores[i];
    }
    return total;
}

// �?nh ngh?a h�m getLowest
// H�m n�y t?m v� tr? v? �i?m ki?m tra th?p nh?t trong m?ng.
double getLowest(const double scores[], int size)
{
    double lowest = scores[0];
    for (int i = 1; i < size; i++)
    {
        if (scores[i] < lowest)
        {
            lowest = scores[i];
        }
    }
    return lowest;
}
