#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    string filename;
    int number;

    // Nh?p t�n t?p t? ng�?i d�ng.
    cout << "Nh?p t�n t?p: ";
    cin >> filename;

    // M? t?p.
    inputFile.open(filename);

    // N?u t?p m? th�nh c�ng, x? l? n�.
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
