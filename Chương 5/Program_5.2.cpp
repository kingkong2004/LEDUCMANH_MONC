// Ch��ng tr?nh n�y minh h?a c�ch s? d?ng c�c to�n t? t�ng v� gi?m v?i ch? �? ti?n t? v� h?u t?.
#include <iostream>
using namespace std;

int main()
{
    int num = 4;

    cout << num << endl;          // Hi?n th? 4
    cout << num++ << endl;        // Hi?n th? 4, sau �� t�ng num l�n 1
    cout << num << endl;          // Hi?n th? 5
    cout << ++num << endl;        // T�ng num l�n 1, sau �� hi?n th? 6
    cout << endl;                 // Hi?n th? d?ng tr?ng
    cout << num << endl;          // Hi?n th? 6
    cout << num-- << endl;        // Hi?n th? 6, sau �� gi?m num �i 1
    cout << num << endl;          // Hi?n th? 5
    cout << --num << endl;        // Gi?m num �i 1, sau �� hi?n th? 4

    return 0;
}
