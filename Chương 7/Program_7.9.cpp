#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 7;
    int numbers[SIZE] = {1, 2, 4, 8}; // Kh?i t?o 4 ph?n t? ð?u tiên

    cout << "Dý?i ðây là n?i dung c?a m?ng:\n";
    for (int index = 0; index < SIZE; index++)
        cout << numbers[index] << " ";

    cout << endl;
    return 0;
}
