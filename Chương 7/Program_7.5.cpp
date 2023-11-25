#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 3; // H?ng s? cho kích thý?c m?ng
    int values[SIZE]; // M?t m?ng g?m 3 s? nguyên
    int count; // Bi?n ð?m v?ng l?p

    // C? g?ng lýu nãm s? vào m?ng có ba ph?n t?.
    cout << "Tôi s? lýu 5 s? vào m?t m?ng có 3 ph?n t?!\n";
    for (count = 0; count < 5; count++)
        values[count] = 100;

    // N?u chýõng tr?nh v?n ch?y, hi?n th? các s?.
    cout << "N?u b?n th?y thông báo này, ngh?a là chýõng tr?nh\n";
    cout << "chýa b? crash! Ðây là các s?:\n";
    for (count = 0; count < 5; count++)
        cout << values[count] << endl;
    return 0;
}
