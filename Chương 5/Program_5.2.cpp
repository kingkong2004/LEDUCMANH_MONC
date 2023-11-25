// Chýõng tr?nh này minh h?a cách s? d?ng các toán t? tãng và gi?m v?i ch? ð? ti?n t? và h?u t?.
#include <iostream>
using namespace std;

int main()
{
    int num = 4;

    cout << num << endl;          // Hi?n th? 4
    cout << num++ << endl;        // Hi?n th? 4, sau ðó tãng num lên 1
    cout << num << endl;          // Hi?n th? 5
    cout << ++num << endl;        // Tãng num lên 1, sau ðó hi?n th? 6
    cout << endl;                 // Hi?n th? d?ng tr?ng
    cout << num << endl;          // Hi?n th? 6
    cout << num-- << endl;        // Hi?n th? 6, sau ðó gi?m num ði 1
    cout << num << endl;          // Hi?n th? 5
    cout << --num << endl;        // Gi?m num ði 1, sau ðó hi?n th? 4

    return 0;
}
