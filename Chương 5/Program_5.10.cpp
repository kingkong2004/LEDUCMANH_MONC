// Ch��ng tr?nh n�y minh h?a m?t v?ng l?p for do ng�?i d�ng �i?u khi?n.
#include <iostream>
using namespace std;

int main()
{
    int minNumber, // S? ban �?u �? t�nh b?nh ph��ng
        maxNumber; // S? l?n nh?t �? t�nh b?nh ph��ng

    // Nh?p gi� tr? t?i thi?u v� t?i �a �? hi?n th?.
    cout << "T�i s? hi?n th? m?t b?ng c�c s? v� b?nh ph��ng c?a ch�ng.\n"
         << "Nh?p s? b?t �?u: ";
    cin >> minNumber;
    cout << "Nh?p s? k?t th�c: ";
    cin >> maxNumber;

    // Hi?n th? b?ng.
    cout << "S? B?nh ph��ng c?a s?\n"
         << "-------------------------\n";

    for (int num = minNumber; num <= maxNumber; num++)
        cout << num << "\t\t" << (num * num) << endl;

    return 0;
}
