#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inputFile;
    string name;

    inputFile.open("Friends.txt");
    cout << "Ðang ð?c d? li?u t? t?p.\n";

    inputFile >> name; // Ð?c tên 1 t? t?p
    cout << name << endl; // Hi?n th? tên 1

    inputFile >> name; // Ð?c tên 2 t? t?p
    cout << name << endl; // Hi?n th? tên 2

    inputFile >> name; // Ð?c tên 3 t? t?p
    cout << name << endl; // Hi?n th? tên 3

    inputFile.close(); // Ðóng t?p
    return 0;
}
