// Ch��ng tr?nh n�y t�nh �i?m trung b?nh c?a c�c b�i ki?m tra. N� y�u c?u ng�?i d�ng nh?p s? h?c sinh v� s? �i?m ki?m tra cho m?i h?c sinh.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numStudents;  // S? h?c sinh
    int numTests;     // S? b�i ki?m tra cho m?i h?c sinh
    double total;     // Bi?n t�ch l?y t?ng s? �i?m
    double average;   // �i?m trung b?nh

    // Thi?t l?p �?nh d?ng �?u ra s? h?c.
    cout << fixed << showpoint << setprecision(1);

    // Nh?p s? h?c sinh.
    cout << "Ch��ng tr?nh t�nh �i?m trung b?nh c?a c�c b�i ki?m tra.\n";
    cout << "C� bao nhi�u h?c sinh c� �i?m? ";
    cin >> numStudents;

    // Nh?p s? b�i ki?m tra cho m?i h?c sinh.
    cout << "M?i h?c sinh c� bao nhi�u b�i ki?m tra? ";
    cin >> numTests;

    // T�nh �i?m trung b?nh cho t?ng h?c sinh.
    for (int student = 1; student <= numStudents; student++)
    {
        total = 0;  // Kh?i t?o bi?n t�ch l?y t?ng.

        for (int test = 1; test <= numTests; test++)
        {
            double score;
            cout << "Nh?p �i?m cho b�i ki?m tra " << test << " c?a ";
            cout << "h?c sinh " << student << ": ";
            cin >> score;
            total += score;  // T�ch l?y t?ng �i?m.
        }

        average = total / numTests;
        cout << "�i?m trung b?nh cho h?c sinh " << student;
        cout << " l� " << average << ".\n\n";
    }

    return 0;
}
