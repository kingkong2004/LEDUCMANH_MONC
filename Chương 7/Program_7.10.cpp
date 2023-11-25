#include <iostream>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 6; // S? lý?ng nhân viên
    int hours[NUM_EMPLOYEES]; // S? gi? làm vi?c c?a m?i nhân viên
    int count; // Bi?n ð?m v?ng l?p

    // Nh?p s? gi? làm vi?c.
    for (count = 0; count < NUM_EMPLOYEES; count++)
    {
        cout << "Nh?p s? gi? làm vi?c c?a nhân viên th? "
             << (count + 1) << ": ";
        cin >> hours[count];
    }

    // Hi?n th? n?i dung c?a m?ng.
    cout << "Các s? gi? b?n ð? nh?p là:";
    for (count = 0; count < NUM_EMPLOYEES; count++)
        cout << " " << hours[count];
    cout << endl;

    return 0;
}
