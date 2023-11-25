#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 5; // S? l�?ng nh�n vi�n
    int hours[NUM_EMPLOYEES]; // M?ng ch?a s? gi? l�m vi?c c?a nh�n vi�n
    double payrate; // M?c l��ng theo gi?
    double grossPay; // T?ng thu nh?p

    // Nh?p s? gi? l�m vi?c c?a t?ng nh�n vi�n.
    cout << "Nh?p s? gi? l�m vi?c c?a ";
    cout << NUM_EMPLOYEES << " nh�n vi�n c�\n";
    cout << "c�ng m?c l��ng theo gi?.\n";
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        cout << "Nh�n vi�n #" << (index + 1) << ": ";
        cin >> hours[index];
    }

    // Nh?p m?c l��ng theo gi? cho t?t c? nh�n vi�n.
    cout << "Nh?p m?c l��ng theo gi? cho t?t c? nh�n vi�n: ";
    cin >> payrate;

    // Hi?n th? thu nh?p c?a t?ng nh�n vi�n.
    cout << "D�?i ��y l� thu nh?p c?a t?ng nh�n vi�n:\n";
    cout << fixed << showpoint << setprecision(2);
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        grossPay = hours[index] * payrate;
        cout << "Nh�n vi�n #" << (index + 1);
        cout << ": $" << grossPay << endl;
    }

    return 0;
}
