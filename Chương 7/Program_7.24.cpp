#include <iostream>
#include <iomanip>
#include <vector> // C?n thi?t �? �?nh ngh?a vector
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 5; // S? l�?ng nh�n vi�n
    vector<int> hours(NUM_EMPLOYEES); // M?t vector c?a s? nguy�n
    vector<double> payRate(NUM_EMPLOYEES); // M?t vector c?a s? th?c
    int index; // Bi?n �?m v?ng l?p

    // Nh?p d? li?u.
    cout << "Nh?p s? gi? l�m vi?c v� m?c l��ng theo gi? cho ";
    cout << NUM_EMPLOYEES << " nh�n vi�n.\n";
    for (index = 0; index < NUM_EMPLOYEES; index++)
    {
        cout << "S? gi? l�m vi?c c?a nh�n vi�n #" << (index + 1);
        cout << ": ";
        cin >> hours[index];
        cout << "M?c l��ng theo gi? cho nh�n vi�n #";
        cout << (index + 1) << ": ";
        cin >> payRate[index];
    }

    // Hi?n th? t?ng thu nh?p c?a t?ng nh�n vi�n.
    cout << "\nD�?i ��y l� t?ng thu nh?p c?a t?ng nh�n vi�n:\n";
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < NUM_EMPLOYEES; index++)
    {
        double grossPay = hours[index] * payRate[index];
        cout << "Nh�n vi�n #" << (index + 1);
        cout << ": $" << grossPay << endl;
    }

    return 0;
}
