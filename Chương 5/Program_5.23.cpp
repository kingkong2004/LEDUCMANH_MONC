#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    int number;

    // M? t?p.
    inputFile.open("BadListOfNumbers.txt");

    // N?u t?p m? th�nh c�ng, x? l? t?p.
    if (inputFile)
    {
        // �?c c�c s? t? t?p v� hi?n th? ch�ng.
        while (inputFile >> number)
        {
            cout << number << endl;
        }

        // ��ng t?p.
        inputFile.close();
    }
    else
    {
        // Hi?n th? th�ng b�o l?i.
        cout << "L?i khi m? t?p.\n";
    }

    return 0;
}
