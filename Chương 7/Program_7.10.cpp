#include <iostream>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 6; // S? l�?ng nh�n vi�n
    int hours[NUM_EMPLOYEES]; // S? gi? l�m vi?c c?a m?i nh�n vi�n
    int count; // Bi?n �?m v?ng l?p

    // Nh?p s? gi? l�m vi?c.
    for (count = 0; count < NUM_EMPLOYEES; count++)
    {
        cout << "Nh?p s? gi? l�m vi?c c?a nh�n vi�n th? "
             << (count + 1) << ": ";
        cin >> hours[count];
    }

    // Hi?n th? n?i dung c?a m?ng.
    cout << "C�c s? gi? b?n �? nh?p l�:";
    for (count = 0; count < NUM_EMPLOYEES; count++)
        cout << " " << hours[count];
    cout << endl;

    return 0;
}
