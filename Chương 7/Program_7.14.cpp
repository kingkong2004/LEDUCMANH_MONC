#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 100; // K�ch th�?c m?ng
    int numbers[ARRAY_SIZE]; // M?ng c� 100 ph?n t?
    int count = 0; // Bi?n �?m v?ng l?p
    ifstream inputFile; // �?i t�?ng lu?ng �?c t? t?p

    inputFile.open("numbers.txt"); // M? t?p.

    // �?c c�c s? t? t?p v�o m?ng.
    // Sau khi v?ng l?p n�y th?c thi, bi?n �?m s? ch?a
    // s? l�?ng gi� tr? ��?c l�u tr? trong m?ng.
    while (count < ARRAY_SIZE && inputFile >> numbers[count])
        count++;

    // ��ng t?p.
    inputFile.close();

    // Hi?n th? c�c s? �? �?c.
    cout << "C�c s? l�: ";
    for (int index = 0; index < count; index++)
        cout << numbers[index] << " ";
    cout << endl;
    return 0;
}
