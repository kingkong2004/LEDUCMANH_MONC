#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inputFile;
    string name;

    inputFile.open("Friends.txt");
    cout << "�ang �?c d? li?u t? t?p.\n";

    inputFile >> name; // �?c t�n 1 t? t?p
    cout << name << endl; // Hi?n th? t�n 1

    inputFile >> name; // �?c t�n 2 t? t?p
    cout << name << endl; // Hi?n th? t�n 2

    inputFile >> name; // �?c t�n 3 t? t?p
    cout << name << endl; // Hi?n th? t�n 3

    inputFile.close(); // ��ng t?p
    return 0;
}
