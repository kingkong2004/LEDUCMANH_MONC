// Ch��ng tr?nh n�y hi?n th? c�c s? t? 1 �?n 10 v� b?nh ph��ng c?a ch�ng.
#include <iostream>
using namespace std;

int main()
{
    const int MIN_NUMBER = 1; // Gi� tr? ban �?u
    const int MAX_NUMBER = 10; // Gi� tr? k?t th�c
    int num;

    cout << "S? B?nh ph��ng c?a s?\n";
    cout << "-------------------------\n";

    for (num = MIN_NUMBER; num <= MAX_NUMBER; num++)
        cout << num << "\t\t" << (num * num) << endl;

    return 0;
}
