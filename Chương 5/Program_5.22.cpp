#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    int number;

    // M? t?p.
    inputFile.open("ListOfNumbers.txt");

    // �?c c�c s? t? t?p v� hi?n th? ch�ng.
    while (inputFile >> number)
    {
        cout << number << endl;
    }

    // ��ng t?p.
    inputFile.close();

    return 0;
}
