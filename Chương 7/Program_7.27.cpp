#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    vector<int> hours; // hours là m?t vector r?ng
    vector<double> payRate; // payRate là m?t vector r?ng
    int numEmployees; // S? lý?ng nhân viên
    int index; // Bi?n ð?m v?ng l?p

    // Nh?p s? lý?ng nhân viên.
    cout << "B?n có bao nhiêu nhân viên? ";
    cin >> numEmployees;

    // Nh?p d? li?u v? lýõng.
    cout << "Nh?p s? gi? làm vi?c và m?c lýõng theo gi? cho " << numEmployees;
    cout << " nhân viên.\n";
    for (index = 0; index < numEmployees; index++)
    {
        int tempHours; // Ð? lýu tr? s? gi? làm vi?c
        double tempRate; // Ð? lýu tr? m?c lýõng theo gi?
        cout << "S? gi? làm vi?c c?a nhân viên #" << (index + 1);
        cout << ": ";
        cin >> tempHours;
        hours.push_back(tempHours); // Thêm m?t ph?n t? vào vector hours
        cout << "M?c lýõng theo gi? cho nhân viên #";
        cout << (index + 1) << ": ";
        cin >> tempRate;
        payRate.push_back(tempRate); // Thêm m?t ph?n t? vào vector payRate
    }

    // Hi?n th? t?ng thu nh?p c?a t?ng nhân viên.
    cout << "Dý?i ðây là t?ng thu nh?p c?a t?ng nhân viên:\n";
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < numEmployees; index++)
    {
        double grossPay = hours[index] * payRate[index];
        cout << "Nhân viên #" << (index + 1);
        cout << ": $" << grossPay << endl;
    }

    return 0;
}
