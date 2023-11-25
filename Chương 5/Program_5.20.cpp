#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile;
    int value1, value2, value3, sum;

    // M? t?p.
    inFile.open("NumericData.txt");

    // Ð?c ba s? t? t?p.
    inFile >> value1;
    inFile >> value2;
    inFile >> value3;

    // Ðóng t?p.
    inFile.close();

    // Tính t?ng c?a ba s?.
    sum = value1 + value2 + value3;

    // Hi?n th? ba s?.
    cout << "Dý?i ðây là các s?:\n"
         << value1 << " " << value2
         << " " << value3 << endl;

    // Hi?n th? t?ng c?a ba s?.
    cout << "T?ng c?a chúng là: " << sum << endl;

    return 0;
}
