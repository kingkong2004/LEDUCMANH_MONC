#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 10; // K�ch th�?c c?a m?ng
    int numbers[ARRAY_SIZE]; // M?ng v?i 10 ph?n t?
    int count; // Bi?n �?m v?ng l?p
    ofstream outputFile; // �?i t�?ng lu?ng �?u ra t?i t?p

    // L�u gi� tr? v�o m?ng.
    for (count = 0; count < ARRAY_SIZE; count++)
        numbers[count] = count;

    // M? m?t t?p �? ghi d? li?u.
    outputFile.open("SavedNumbers.txt");

    // Ghi n?i dung c?a m?ng v�o t?p.
    for (count = 0; count < ARRAY_SIZE; count++)
        outputFile << numbers[count] << endl;

    // ��ng t?p.
    outputFile.close();

    // ��ng ch��ng tr?nh.
    cout << "C�c s? �? ��?c l�u v�o t?p.\n";
    return 0;
}

