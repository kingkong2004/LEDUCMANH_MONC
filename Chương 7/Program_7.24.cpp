#include <iostream>
#include <iomanip>
#include <vector> // C?n thi?t ð? ð?nh ngh?a vector
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 5; // S? lý?ng nhân viên
    vector<int> hours(NUM_EMPLOYEES); // M?t vector c?a s? nguyên
    vector<double> payRate(NUM_EMPLOYEES); // M?t vector c?a s? th?c
    int index; // Bi?n ð?m v?ng l?p

    // Nh?p d? li?u.
    cout << "Nh?p s? gi? làm vi?c và m?c lýõng theo gi? cho ";
    cout << NUM_EMPLOYEES << " nhân viên.\n";
    for (index = 0; index < NUM_EMPLOYEES; index++)
    {
        cout << "S? gi? làm vi?c c?a nhân viên #" << (index + 1);
        cout << ": ";
        cin >> hours[index];
        cout << "M?c lýõng theo gi? cho nhân viên #";
        cout << (index + 1) << ": ";
        cin >> payRate[index];
    }

    // Hi?n th? t?ng thu nh?p c?a t?ng nhân viên.
    cout << "\nDý?i ðây là t?ng thu nh?p c?a t?ng nhân viên:\n";
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < NUM_EMPLOYEES; index++)
    {
        double grossPay = hours[index] * payRate[index];
        cout << "Nhân viên #" << (index + 1);
        cout << ": $" << grossPay << endl;
    }

    return 0;
}
