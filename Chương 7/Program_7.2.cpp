#include <iostream>
using namespace std;

int main()
{
    // �?nh ngh?a m?t m?ng c�c s? nguy�n.
    int numbers[] = { 10, 20, 30, 40, 50 };

    // Hi?n th? c�c gi� tr? trong m?ng.
    for (int val : numbers)
        cout << val << endl;

    return 0;
}
