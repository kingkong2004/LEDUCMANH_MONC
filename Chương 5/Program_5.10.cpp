// Chýõng tr?nh này minh h?a m?t v?ng l?p for do ngý?i dùng ði?u khi?n.
#include <iostream>
using namespace std;

int main()
{
    int minNumber, // S? ban ð?u ð? tính b?nh phýõng
        maxNumber; // S? l?n nh?t ð? tính b?nh phýõng

    // Nh?p giá tr? t?i thi?u và t?i ða ð? hi?n th?.
    cout << "Tôi s? hi?n th? m?t b?ng các s? và b?nh phýõng c?a chúng.\n"
         << "Nh?p s? b?t ð?u: ";
    cin >> minNumber;
    cout << "Nh?p s? k?t thúc: ";
    cin >> maxNumber;

    // Hi?n th? b?ng.
    cout << "S? B?nh phýõng c?a s?\n"
         << "-------------------------\n";

    for (int num = minNumber; num <= maxNumber; num++)
        cout << num << "\t\t" << (num * num) << endl;

    return 0;
}
