#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 10; // K�ch th�?c c?a m?ng
    int numbers[ARRAY_SIZE]; // M?ng v?i 10 ph?n t?
    int count = 0; // Bi?n �?m v?ng l?p
    ifstream inputFile; // �?i t�?ng lu?ng �?u v�o t? t?p

    // M? t?p.
    inputFile.open("TenNumbers.txt");

    // �?c c�c s? t? t?p v�o m?ng.
    while (count < ARRAY_SIZE && inputFile >> numbers[count])
        count++;

    // ��ng t?p.
    inputFile.close();

    // Hi?n th? c�c s? �? �?c:
    cout << "C�c s? l�: ";
    for (count = 0; count < ARRAY_SIZE; count++)
        cout << numbers[count] << " ";
    cout << endl;

    return 0;
}
