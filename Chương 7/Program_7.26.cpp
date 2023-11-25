#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Ð?nh ngh?a và kh?i t?o m?t vector v?i 5 ph?n t?.
    vector<int> numbers(5);

    // Nh?p giá tr? cho các ph?n t? c?a vector.
    for (int &val : numbers)
    {
        cout << "Nh?p m?t giá tr? s? nguyên: ";
        cin >> val;
    }

    // Hi?n th? các ph?n t? c?a vector.
    cout << "Dý?i ðây là các giá tr? b?n ð? nh?p:\n";
    for (int val : numbers)
        cout << val << endl;

    return 0;
}
