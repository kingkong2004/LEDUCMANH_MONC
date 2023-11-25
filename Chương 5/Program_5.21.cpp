#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile; // �?i t�?ng lu?ng t?p
    int numberOfDays;   // S? ng�y b�n h�ng
    double sales;       // S? ti?n b�n h�ng trong m?t ng�y

    // Nh?p s? ng�y.
    cout << "Trong bao nhi�u ng�y b?n c� doanh s? b�n h�ng? ";
    cin >> numberOfDays;

    // M? m?t t?p c� t�n l� Sales.txt.
    outputFile.open("Sales.txt");

    // Nh?p doanh s? b�n h�ng cho m?i ng�y v� ghi ch�ng v�o t?p.
    for (int count = 1; count <= numberOfDays; count++)
    {
        // Nh?p doanh s? b�n h�ng cho m?t ng�y.
        cout << "Nh?p doanh s? b�n h�ng cho ng�y th? "
             << count << ": ";
        cin >> sales;

        // Ghi doanh s? b�n h�ng v�o t?p.
        outputFile << sales << endl;
    }

    // ��ng t?p.
    outputFile.close();
    cout << "D? li?u �? ��?c ghi v�o Sales.txt\n";
    return 0;
}
