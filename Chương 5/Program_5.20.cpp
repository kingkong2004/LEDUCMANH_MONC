#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile;
    int value1, value2, value3, sum;

    // M? t?p.
    inFile.open("NumericData.txt");

    // �?c ba s? t? t?p.
    inFile >> value1;
    inFile >> value2;
    inFile >> value3;

    // ��ng t?p.
    inFile.close();

    // T�nh t?ng c?a ba s?.
    sum = value1 + value2 + value3;

    // Hi?n th? ba s?.
    cout << "D�?i ��y l� c�c s?:\n"
         << value1 << " " << value2
         << " " << value3 << endl;

    // Hi?n th? t?ng c?a ba s?.
    cout << "T?ng c?a ch�ng l�: " << sum << endl;

    return 0;
}
