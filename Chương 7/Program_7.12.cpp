#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int numbers[SIZE];

    // Nh?n giá tr? t? ngý?i dùng cho m?ng.
    for (int &val : numbers)
    {
        cout << "Nh?p m?t s? nguyên: ";
        cin >> val;
    }

    // Hi?n th? các giá tr? trong m?ng.
    cout << "Dý?i ðây là các giá tr? b?n ð? nh?p:\n";
    for (int val : numbers)
        cout << val << endl;

    return 0;
}
