#include <iostream>
using namespace std;

void showValue(int); // Khai b�o h�m

int main()
{
    const int SIZE = 8;
    int numbers[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

    for (int index = 0; index < SIZE; index++)
        showValue(numbers[index]);

    return 0;
}

// �?nh ngh?a h�m showValue.
// H�m n�y nh?n m?t �?i s? ki?u integer.
// Gi� tr? c?a �?i s? s? ��?c hi?n th?.
void showValue(int num)
{
    cout << num << " ";
}
