// Chýõng tr?nh này tính ði?m trung b?nh c?a các bài ki?m tra. Nó yêu c?u ngý?i dùng nh?p s? h?c sinh và s? ði?m ki?m tra cho m?i h?c sinh.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numStudents;  // S? h?c sinh
    int numTests;     // S? bài ki?m tra cho m?i h?c sinh
    double total;     // Bi?n tích l?y t?ng s? ði?m
    double average;   // Ði?m trung b?nh

    // Thi?t l?p ð?nh d?ng ð?u ra s? h?c.
    cout << fixed << showpoint << setprecision(1);

    // Nh?p s? h?c sinh.
    cout << "Chýõng tr?nh tính ði?m trung b?nh c?a các bài ki?m tra.\n";
    cout << "Có bao nhiêu h?c sinh có ði?m? ";
    cin >> numStudents;

    // Nh?p s? bài ki?m tra cho m?i h?c sinh.
    cout << "M?i h?c sinh có bao nhiêu bài ki?m tra? ";
    cin >> numTests;

    // Tính ði?m trung b?nh cho t?ng h?c sinh.
    for (int student = 1; student <= numStudents; student++)
    {
        total = 0;  // Kh?i t?o bi?n tích l?y t?ng.

        for (int test = 1; test <= numTests; test++)
        {
            double score;
            cout << "Nh?p ði?m cho bài ki?m tra " << test << " c?a ";
            cout << "h?c sinh " << student << ": ";
            cin >> score;
            total += score;  // Tích l?y t?ng ði?m.
        }

        average = total / numTests;
        cout << "Ði?m trung b?nh cho h?c sinh " << student;
        cout << " là " << average << ".\n\n";
    }

    return 0;
}
