#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 10; // Kích thý?c c?a m?ng
    int numbers[ARRAY_SIZE]; // M?ng v?i 10 ph?n t?
    int count; // Bi?n ð?m v?ng l?p
    ofstream outputFile; // Ð?i tý?ng lu?ng ð?u ra t?i t?p

    // Lýu giá tr? vào m?ng.
    for (count = 0; count < ARRAY_SIZE; count++)
        numbers[count] = count;

    // M? m?t t?p ð? ghi d? li?u.
    outputFile.open("SavedNumbers.txt");

    // Ghi n?i dung c?a m?ng vào t?p.
    for (count = 0; count < ARRAY_SIZE; count++)
        outputFile << numbers[count] << endl;

    // Ðóng t?p.
    outputFile.close();

    // Ðóng chýõng tr?nh.
    cout << "Các s? ð? ðý?c lýu vào t?p.\n";
    return 0;
}

