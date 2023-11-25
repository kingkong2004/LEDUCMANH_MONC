#include <iostream>
using namespace std;

void showValue(int); // Khai báo hàm

int main()
{
    const int SIZE = 8;
    int numbers[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

    for (int index = 0; index < SIZE; index++)
        showValue(numbers[index]);

    return 0;
}

// Ð?nh ngh?a hàm showValue.
// Hàm này nh?n m?t ð?i s? ki?u integer.
// Giá tr? c?a ð?i s? s? ðý?c hi?n th?.
void showValue(int num)
{
    cout << num << " ";
}
