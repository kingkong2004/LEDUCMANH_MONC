// Chýõng tr?nh này chuy?n ð?i t?c ð? t? 60 kph ð?n 130 kph (tãng 10 kph m?i l?n) sang mph.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // H?ng s? cho t?c ð?
    const int START_KPH = 60; // T?c ð? ban ð?u
    const int END_KPH = 130;   // T?c ð? k?t thúc
    const int INCREMENT = 10;  // Bý?c tãng t?c ð?

    // H?ng s? cho h? s? chuy?n ð?i
    const double CONVERSION_FACTOR = 0.6214;

    // Bi?n
    int kph;    // Lýu tr? t?c ð? trong kph
    double mph; // Lýu tr? t?c ð? trong mph

    // Thi?t l?p ð?nh d?ng ð?u ra s? h?c.
    cout << fixed << showpoint << setprecision(1);

    // Hi?n th? tiêu ð? b?ng.
    cout << "KPH\tMPH\n";
    cout << "---------------\n";

    // Hi?n th? các t?c ð?.
    for (kph = START_KPH; kph <= END_KPH; kph += INCREMENT)
    {
        // Tính mph
        mph = kph * CONVERSION_FACTOR;

        // Hi?n th? t?c ð? trong kph và mph.
        cout << kph << "\t" << mph << endl;
    }

    return 0;
}
