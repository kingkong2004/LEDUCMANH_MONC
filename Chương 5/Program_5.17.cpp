#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile;
    int number1, number2, number3;

    // M? t?p �?u ra.
    outputFile.open("Numbers.txt");

    // L?y ba s? t? ng�?i d�ng.
    cout << "Nh?p m?t s?: ";
    cin >> number1;
    cout << "Nh?p m?t s? kh�c: ";
    cin >> number2;
    cout << "M?t l?n n?a. Nh?p m?t s?: ";
    cin >> number3;

    // Ghi c�c s? v�o t?p.
    outputFile << number1 << endl;
    outputFile << number2 << endl;
    outputFile << number3 << endl;
    cout << "C�c s? �? ��?c l�u v�o t?p.\n";

    // ��ng t?p
    outputFile.close();
    cout << "Ho�n th�nh.\n";
    return 0;
}
