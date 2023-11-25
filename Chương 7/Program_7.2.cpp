#include <iostream>
using namespace std;

int main()
{
    // Ð?nh ngh?a m?t m?ng các s? nguyên.
    int numbers[] = { 10, 20, 30, 40, 50 };

    // Hi?n th? các giá tr? trong m?ng.
    for (int val : numbers)
        cout << val << endl;

    return 0;
}
