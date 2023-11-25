#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 100; // Kích thý?c m?ng
    int numbers[ARRAY_SIZE]; // M?ng có 100 ph?n t?
    int count = 0; // Bi?n ð?m v?ng l?p
    ifstream inputFile; // Ð?i tý?ng lu?ng ð?c t? t?p

    inputFile.open("numbers.txt"); // M? t?p.

    // Ð?c các s? t? t?p vào m?ng.
    // Sau khi v?ng l?p này th?c thi, bi?n ð?m s? ch?a
    // s? lý?ng giá tr? ðý?c lýu tr? trong m?ng.
    while (count < ARRAY_SIZE && inputFile >> numbers[count])
        count++;

    // Ðóng t?p.
    inputFile.close();

    // Hi?n th? các s? ð? ð?c.
    cout << "Các s? là: ";
    for (int index = 0; index < count; index++)
        cout << numbers[index] << " ";
    cout << endl;
    return 0;
}
