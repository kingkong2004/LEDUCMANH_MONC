#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // �?nh ngh?a v� kh?i t?o m?t vector v?i 5 ph?n t?.
    vector<int> numbers(5);

    // Nh?p gi� tr? cho c�c ph?n t? c?a vector.
    for (int &val : numbers)
    {
        cout << "Nh?p m?t gi� tr? s? nguy�n: ";
        cin >> val;
    }

    // Hi?n th? c�c ph?n t? c?a vector.
    cout << "D�?i ��y l� c�c gi� tr? b?n �? nh?p:\n";
    for (int val : numbers)
        cout << val << endl;

    return 0;
}
