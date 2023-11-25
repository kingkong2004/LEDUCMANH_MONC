// Chýõng tr?nh này hi?n th? danh sách các s? và b?nh phýõng c?a chúng.
#include <iostream>
using namespace std;

int main()
{
    const int MIN_NUMBER = 1; // S? b?t ð?u ð? tính b?nh phýõng
    const int MAX_NUMBER = 10; // S? l?n nh?t ð? tính b?nh phýõng
    int num = MIN_NUMBER; // B? ð?m

    cout << "S? B?nh phýõng c?a s?\n";
    cout << "-------------------------\n";

    while (num <= MAX_NUMBER)
    {
        cout << num << "\t\t" << (num * num) << endl;
        num++; // Tãng giá tr? b? ð?m.
    }

    return 0;
}
