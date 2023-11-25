#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    vector<int> hours; // hours l� m?t vector r?ng
    vector<double> payRate; // payRate l� m?t vector r?ng
    int numEmployees; // S? l�?ng nh�n vi�n
    int index; // Bi?n �?m v?ng l?p

    // Nh?p s? l�?ng nh�n vi�n.
    cout << "B?n c� bao nhi�u nh�n vi�n? ";
    cin >> numEmployees;

    // Nh?p d? li?u v? l��ng.
    cout << "Nh?p s? gi? l�m vi?c v� m?c l��ng theo gi? cho " << numEmployees;
    cout << " nh�n vi�n.\n";
    for (index = 0; index < numEmployees; index++)
    {
        int tempHours; // �? l�u tr? s? gi? l�m vi?c
        double tempRate; // �? l�u tr? m?c l��ng theo gi?
        cout << "S? gi? l�m vi?c c?a nh�n vi�n #" << (index + 1);
        cout << ": ";
        cin >> tempHours;
        hours.push_back(tempHours); // Th�m m?t ph?n t? v�o vector hours
        cout << "M?c l��ng theo gi? cho nh�n vi�n #";
        cout << (index + 1) << ": ";
        cin >> tempRate;
        payRate.push_back(tempRate); // Th�m m?t ph?n t? v�o vector payRate
    }

    // Hi?n th? t?ng thu nh?p c?a t?ng nh�n vi�n.
    cout << "D�?i ��y l� t?ng thu nh?p c?a t?ng nh�n vi�n:\n";
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < numEmployees; index++)
    {
        double grossPay = hours[index] * payRate[index];
        cout << "Nh�n vi�n #" << (index + 1);
        cout << ": $" << grossPay << endl;
    }

    return 0;
}
