#include <iostream>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 6;
    int hours[NUM_EMPLOYEES];

    // L?y s? gi? l�m vi?c c?a t?ng nh�n vi�n.
    cout << "Nh?p s? gi? l�m vi?c c?a "
         << NUM_EMPLOYEES << " nh�n vi�n: ";
    cin >> hours[0];
    cin >> hours[1];
    cin >> hours[2];
    cin >> hours[3];
    cin >> hours[4];
    cin >> hours[5];

    // Hi?n th? c�c gi� tr? trong m?ng.
    cout << "S? gi? b?n �? nh?p l�:";
    cout << " " << hours[0];
    cout << " " << hours[1];
    cout << " " << hours[2];
    cout << " " << hours[3];
    cout << " " << hours[4];
    cout << " " << hours[5] << endl;

    return 0;
}
