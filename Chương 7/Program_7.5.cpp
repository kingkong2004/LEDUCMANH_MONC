#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 3; // H?ng s? cho k�ch th�?c m?ng
    int values[SIZE]; // M?t m?ng g?m 3 s? nguy�n
    int count; // Bi?n �?m v?ng l?p

    // C? g?ng l�u n�m s? v�o m?ng c� ba ph?n t?.
    cout << "T�i s? l�u 5 s? v�o m?t m?ng c� 3 ph?n t?!\n";
    for (count = 0; count < 5; count++)
        values[count] = 100;

    // N?u ch��ng tr?nh v?n ch?y, hi?n th? c�c s?.
    cout << "N?u b?n th?y th�ng b�o n�y, ngh?a l� ch��ng tr?nh\n";
    cout << "ch�a b? crash! ��y l� c�c s?:\n";
    for (count = 0; count < 5; count++)
        cout << values[count] << endl;
    return 0;
}
