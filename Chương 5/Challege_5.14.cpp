#include <iostream>
#include <string>
using namespace std;

int main() {
    int numStudents;

    // Nh?p s? lý?ng h?c sinh t? ngý?i dùng v?i ki?m tra ð?u vào
    do {
        cout << "Nh?p s? lý?ng h?c sinh trong l?p (1-25): ";
        cin >> numStudents;

        if (numStudents < 1 || numStudents > 25) {
            cout << "Ð?u vào không h?p l?. Vui l?ng nh?p s? t? 1 ð?n 25." << endl;
        }
    } while (numStudents < 1 || numStudents > 25);

    string firstName, firstInLine, lastInLine;

    // V?ng l?p ð? ð?c tên c?a h?c sinh
    for (int i = 0; i < numStudents; i++) {
        cout << "Nh?p tên c?a h?c sinh " << i + 1 << ": ";
        cin >> firstName;

        if (i == 0) {
            // Kh?i t?o firstInLine v?i tên ð?u tiên
            firstInLine = firstName;
            lastInLine = firstName;
        } else {
            // So sánh tên ð? t?m h?c sinh ð?ng ð?u và ð?ng cu?i
            if (firstName < firstInLine) {
                firstInLine = firstName;
            }
            if (firstName > lastInLine) {
                lastInLine = firstName;
            }
        }
    }

    // Hi?n th? h?c sinh ð?ng ð?u và h?c sinh ð?ng cu?i
    cout << "H?c sinh ð?ng ð?u hàng là: " << firstInLine << endl;
    cout << "H?c sinh ð?ng cu?i hàng là: " << lastInLine << endl;

    return 0;
}
