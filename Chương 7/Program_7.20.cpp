#include <iostream>
#include <iomanip>
using namespace std;

// Nguyên m?u hàm
void getTestScores(double[], int);
double getTotal(const double[], int);
double getLowest(const double[], int);

int main()
{
    const int SIZE = 4; // Kích thý?c m?ng
    double testScores[SIZE], // M?ng các ði?m ki?m tra
        total, // T?ng ði?m
        lowestScore, // Ði?m th?p nh?t
        average; // Ði?m trung b?nh

    // Thi?t l?p ð?nh d?ng ð?u ra s? h?c.
    cout << fixed << showpoint << setprecision(1);

    // Nh?p ði?m ki?m tra t? ngý?i dùng.
    getTestScores(testScores, SIZE);

    // Tính t?ng ði?m ki?m tra.
    total = getTotal(testScores, SIZE);

    // L?y ði?m ki?m tra th?p nh?t.
    lowestScore = getLowest(testScores, SIZE);

    // Tr? ði?m th?p nh?t kh?i t?ng.
    total -= lowestScore;

    // Tính ði?m trung b?nh. Chia cho (SIZE - 1) v? ði?m ki?m tra th?p nh?t ð? b? lo?i b?.
    average = total / (SIZE - 1);

    // Hi?n th? ði?m trung b?nh.
    cout << "Trung b?nh v?i ði?m th?p nh?t b? lo?i b? là " << average << ".\n";

    return 0;
}

// Ð?nh ngh?a hàm getTestScores
// Hàm này l?y các ði?m ki?m tra t? ngý?i dùng và lýu tr? chúng trong m?ng.
void getTestScores(double scores[], int size)
{
    cout << "Nh?p " << size << " ði?m ki?m tra:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> scores[i];
    }
}

// Ð?nh ngh?a hàm getTotal
// Hàm này tính t?ng c?a các ði?m ki?m tra trong m?ng.
double getTotal(const double scores[], int size)
{
    double total = 0.0;
    for (int i = 0; i < size; i++)
    {
        total += scores[i];
    }
    return total;
}

// Ð?nh ngh?a hàm getLowest
// Hàm này t?m và tr? v? ði?m ki?m tra th?p nh?t trong m?ng.
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
