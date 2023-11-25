#include <iostream>
using namespace std;

// Nguyên m?u hàm
bool testPIN(const int [], const int [], int);

int main()
{
    const int NUM_DIGITS = 7; // S? ch? s? trong m?t m? PIN
    int pin1[NUM_DIGITS] = {2, 4, 1, 8, 7, 9, 0}; // T?p giá tr? cõ b?n.
    int pin2[NUM_DIGITS] = {2, 4, 6, 8, 7, 9, 0}; // Ch? có 1 ph?n t? khác v?i pin1.
    int pin3[NUM_DIGITS] = {1, 2, 3, 4, 5, 6, 7}; // T?t c? các ph?n t? ð?u khác v?i pin1.

    if (testPIN(pin1, pin2, NUM_DIGITS))
        cout << "L?I: pin1 và pin2 báo cáo gi?ng nhau.\n";
    else
        cout << "THÀNH CÔNG: pin1 và pin2 khác nhau.\n";

    if (testPIN(pin1, pin3, NUM_DIGITS))
        cout << "L?I: pin1 và pin3 báo cáo gi?ng nhau.\n";
    else
        cout << "THÀNH CÔNG: pin1 và pin3 khác nhau.\n";

    if (testPIN(pin1, pin1, NUM_DIGITS))
        cout << "THÀNH CÔNG: pin1 và pin1 báo cáo gi?ng nhau.\n";
    else
        cout << "L?I: pin1 và pin1 báo cáo khác nhau.\n";

    return 0;
}

//******************************************************************
// Hàm sau ðây ch?p nh?n hai m?ng s? nguyên. Các m?ng ðý?c so sánh. *
// N?u chúng ch?a cùng các giá tr?, hàm tr? v? true. *
// N?u chúng ch?a các giá tr? khác nhau, hàm tr? v? false. *
//******************************************************************

bool testPIN(const int custPIN[], const int databasePIN[], int size)
{
    for (int index = 0; index < size; index++)
    {
        if (custPIN[index] != databasePIN[index])
            return false; // Chúng ta ð? t?m th?y hai giá tr? khác nhau.
    }
    return true; // N?u chúng ta ði ð?n ðây, các giá tr? gi?ng nhau.
}
