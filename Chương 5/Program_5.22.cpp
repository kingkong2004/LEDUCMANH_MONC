#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    int number;

    // M? t?p.
    inputFile.open("ListOfNumbers.txt");

    // Ð?c các s? t? t?p và hi?n th? chúng.
    while (inputFile >> number)
    {
        cout << number << endl;
    }

    // Ðóng t?p.
    inputFile.close();

    return 0;
}
