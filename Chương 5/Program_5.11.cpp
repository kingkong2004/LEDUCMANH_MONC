// Ch��ng tr?nh n�y chuy?n �?i t?c �? t? 60 kph �?n 130 kph (t�ng 10 kph m?i l?n) sang mph.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // H?ng s? cho t?c �?
    const int START_KPH = 60; // T?c �? ban �?u
    const int END_KPH = 130;   // T?c �? k?t th�c
    const int INCREMENT = 10;  // B�?c t�ng t?c �?

    // H?ng s? cho h? s? chuy?n �?i
    const double CONVERSION_FACTOR = 0.6214;

    // Bi?n
    int kph;    // L�u tr? t?c �? trong kph
    double mph; // L�u tr? t?c �? trong mph

    // Thi?t l?p �?nh d?ng �?u ra s? h?c.
    cout << fixed << showpoint << setprecision(1);

    // Hi?n th? ti�u �? b?ng.
    cout << "KPH\tMPH\n";
    cout << "---------------\n";

    // Hi?n th? c�c t?c �?.
    for (kph = START_KPH; kph <= END_KPH; kph += INCREMENT)
    {
        // T�nh mph
        mph = kph * CONVERSION_FACTOR;

        // Hi?n th? t?c �? trong kph v� mph.
        cout << kph << "\t" << mph << endl;
    }

    return 0;
}
