#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int numbers[SIZE];

    // Nh?n gi� tr? t? ng�?i d�ng cho m?ng.
    for (int &val : numbers)
    {
        cout << "Nh?p m?t s? nguy�n: ";
        cin >> val;
    }

    // Hi?n th? c�c gi� tr? trong m?ng.
    cout << "D�?i ��y l� c�c gi� tr? b?n �? nh?p:\n";
    for (int val : numbers)
        cout << val << endl;

    return 0;
}
