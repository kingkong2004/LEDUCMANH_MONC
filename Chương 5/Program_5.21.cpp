#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile; // Ð?i tý?ng lu?ng t?p
    int numberOfDays;   // S? ngày bán hàng
    double sales;       // S? ti?n bán hàng trong m?t ngày

    // Nh?p s? ngày.
    cout << "Trong bao nhiêu ngày b?n có doanh s? bán hàng? ";
    cin >> numberOfDays;

    // M? m?t t?p có tên là Sales.txt.
    outputFile.open("Sales.txt");

    // Nh?p doanh s? bán hàng cho m?i ngày và ghi chúng vào t?p.
    for (int count = 1; count <= numberOfDays; count++)
    {
        // Nh?p doanh s? bán hàng cho m?t ngày.
        cout << "Nh?p doanh s? bán hàng cho ngày th? "
             << count << ": ";
        cin >> sales;

        // Ghi doanh s? bán hàng vào t?p.
        outputFile << sales << endl;
    }

    // Ðóng t?p.
    outputFile.close();
    cout << "D? li?u ð? ðý?c ghi vào Sales.txt\n";
    return 0;
}
