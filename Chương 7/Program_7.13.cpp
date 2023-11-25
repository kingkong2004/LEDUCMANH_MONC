#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 5; // S? lý?ng nhân viên
    int hours[NUM_EMPLOYEES]; // M?ng ch?a s? gi? làm vi?c c?a nhân viên
    double payrate; // M?c lýõng theo gi?
    double grossPay; // T?ng thu nh?p

    // Nh?p s? gi? làm vi?c c?a t?ng nhân viên.
    cout << "Nh?p s? gi? làm vi?c c?a ";
    cout << NUM_EMPLOYEES << " nhân viên có\n";
    cout << "cùng m?c lýõng theo gi?.\n";
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        cout << "Nhân viên #" << (index + 1) << ": ";
        cin >> hours[index];
    }

    // Nh?p m?c lýõng theo gi? cho t?t c? nhân viên.
    cout << "Nh?p m?c lýõng theo gi? cho t?t c? nhân viên: ";
    cin >> payrate;

    // Hi?n th? thu nh?p c?a t?ng nhân viên.
    cout << "Dý?i ðây là thu nh?p c?a t?ng nhân viên:\n";
    cout << fixed << showpoint << setprecision(2);
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        grossPay = hours[index] * payrate;
        cout << "Nhân viên #" << (index + 1);
        cout << ": $" << grossPay << endl;
    }

    return 0;
}
