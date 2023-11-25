#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile;
    int number1, number2, number3;

    // M? t?p ğ?u ra.
    outputFile.open("Numbers.txt");

    // L?y ba s? t? ngı?i dùng.
    cout << "Nh?p m?t s?: ";
    cin >> number1;
    cout << "Nh?p m?t s? khác: ";
    cin >> number2;
    cout << "M?t l?n n?a. Nh?p m?t s?: ";
    cin >> number3;

    // Ghi các s? vào t?p.
    outputFile << number1 << endl;
    outputFile << number2 << endl;
    outputFile << number3 << endl;
    cout << "Các s? ğ? ğı?c lıu vào t?p.\n";

    // Ğóng t?p
    outputFile.close();
    cout << "Hoàn thành.\n";
    return 0;
}
