// Ch��ng tr?nh n�y hi?n th? danh s�ch c�c s? v� b?nh ph��ng c?a ch�ng.
#include <iostream>
using namespace std;

int main()
{
    const int MIN_NUMBER = 1; // S? b?t �?u �? t�nh b?nh ph��ng
    const int MAX_NUMBER = 10; // S? l?n nh?t �? t�nh b?nh ph��ng
    int num = MIN_NUMBER; // B? �?m

    cout << "S? B?nh ph��ng c?a s?\n";
    cout << "-------------------------\n";

    while (num <= MAX_NUMBER)
    {
        cout << num << "\t\t" << (num * num) << endl;
        num++; // T�ng gi� tr? b? �?m.
    }

    return 0;
}
