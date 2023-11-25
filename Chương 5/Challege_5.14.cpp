#include <iostream>
#include <string>
using namespace std;

int main() {
    int numStudents;

    // Nh?p s? l�?ng h?c sinh t? ng�?i d�ng v?i ki?m tra �?u v�o
    do {
        cout << "Nh?p s? l�?ng h?c sinh trong l?p (1-25): ";
        cin >> numStudents;

        if (numStudents < 1 || numStudents > 25) {
            cout << "�?u v�o kh�ng h?p l?. Vui l?ng nh?p s? t? 1 �?n 25." << endl;
        }
    } while (numStudents < 1 || numStudents > 25);

    string firstName, firstInLine, lastInLine;

    // V?ng l?p �? �?c t�n c?a h?c sinh
    for (int i = 0; i < numStudents; i++) {
        cout << "Nh?p t�n c?a h?c sinh " << i + 1 << ": ";
        cin >> firstName;

        if (i == 0) {
            // Kh?i t?o firstInLine v?i t�n �?u ti�n
            firstInLine = firstName;
            lastInLine = firstName;
        } else {
            // So s�nh t�n �? t?m h?c sinh �?ng �?u v� �?ng cu?i
            if (firstName < firstInLine) {
                firstInLine = firstName;
            }
            if (firstName > lastInLine) {
                lastInLine = firstName;
            }
        }
    }

    // Hi?n th? h?c sinh �?ng �?u v� h?c sinh �?ng cu?i
    cout << "H?c sinh �?ng �?u h�ng l�: " << firstInLine << endl;
    cout << "H?c sinh �?ng cu?i h�ng l�: " << lastInLine << endl;

    return 0;
}
