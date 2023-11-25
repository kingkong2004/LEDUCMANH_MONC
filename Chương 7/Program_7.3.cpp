#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 10; // Kích thý?c c?a m?ng
    int numbers[ARRAY_SIZE]; // M?ng v?i 10 ph?n t?
    int count = 0; // Bi?n ð?m v?ng l?p
    ifstream inputFile; // Ð?i tý?ng lu?ng ð?u vào t? t?p

    // M? t?p.
    inputFile.open("TenNumbers.txt");

    // Ð?c các s? t? t?p vào m?ng.
    while (count < ARRAY_SIZE && inputFile >> numbers[count])
        count++;

    // Ðóng t?p.
    inputFile.close();

    // Hi?n th? các s? ð? ð?c:
    cout << "Các s? là: ";
    for (count = 0; count < ARRAY_SIZE; count++)
        cout << numbers[count] << " ";
    cout << endl;

    return 0;
}
