#include <iostream>
using namespace std;

// Nguy�n m?u h�m
bool testPIN(const int [], const int [], int);

int main()
{
    const int NUM_DIGITS = 7; // S? ch? s? trong m?t m? PIN
    int pin1[NUM_DIGITS] = {2, 4, 1, 8, 7, 9, 0}; // T?p gi� tr? c� b?n.
    int pin2[NUM_DIGITS] = {2, 4, 6, 8, 7, 9, 0}; // Ch? c� 1 ph?n t? kh�c v?i pin1.
    int pin3[NUM_DIGITS] = {1, 2, 3, 4, 5, 6, 7}; // T?t c? c�c ph?n t? �?u kh�c v?i pin1.

    if (testPIN(pin1, pin2, NUM_DIGITS))
        cout << "L?I: pin1 v� pin2 b�o c�o gi?ng nhau.\n";
    else
        cout << "TH�NH C�NG: pin1 v� pin2 kh�c nhau.\n";

    if (testPIN(pin1, pin3, NUM_DIGITS))
        cout << "L?I: pin1 v� pin3 b�o c�o gi?ng nhau.\n";
    else
        cout << "TH�NH C�NG: pin1 v� pin3 kh�c nhau.\n";

    if (testPIN(pin1, pin1, NUM_DIGITS))
        cout << "TH�NH C�NG: pin1 v� pin1 b�o c�o gi?ng nhau.\n";
    else
        cout << "L?I: pin1 v� pin1 b�o c�o kh�c nhau.\n";

    return 0;
}

//******************************************************************
// H�m sau ��y ch?p nh?n hai m?ng s? nguy�n. C�c m?ng ��?c so s�nh. *
// N?u ch�ng ch?a c�ng c�c gi� tr?, h�m tr? v? true. *
// N?u ch�ng ch?a c�c gi� tr? kh�c nhau, h�m tr? v? false. *
//******************************************************************

bool testPIN(const int custPIN[], const int databasePIN[], int size)
{
    for (int index = 0; index < size; index++)
    {
        if (custPIN[index] != databasePIN[index])
            return false; // Ch�ng ta �? t?m th?y hai gi� tr? kh�c nhau.
    }
    return true; // N?u ch�ng ta �i �?n ��y, c�c gi� tr? gi?ng nhau.
}
