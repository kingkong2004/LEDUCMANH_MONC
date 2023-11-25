// Chýõng tr?nh này hi?n th? các s? t? 1 ð?n 10 và b?nh phýõng c?a chúng.
#include <iostream>
using namespace std;

int main()
{
    const int MIN_NUMBER = 1; // Giá tr? ban ð?u
    const int MAX_NUMBER = 10; // Giá tr? k?t thúc
    int num;

    cout << "S? B?nh phýõng c?a s?\n";
    cout << "-------------------------\n";

    for (num = MIN_NUMBER; num <= MAX_NUMBER; num++)
        cout << num << "\t\t" << (num * num) << endl;

    return 0;
}
