#include <iostream>
using namespace std;

void showValues(int[], int); // Khai b�o h�m

int main()
{
    const int ARRAY_SIZE = 8;
    int numbers[ARRAY_SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

    showValues(numbers, ARRAY_SIZE);
    return 0;
}

// �?nh ngh?a h�m showValues.
// H�m n�y ch?p nh?n m?t m?ng c�c s? nguy�n v�
// k�ch th�?c c?a m?ng l� �?i s? c?a n�.
// N?i dung c?a m?ng s? ��?c hi?n th?.
void showValues(int nums[], int size)
{
    for (int index = 0; index < size; index++)
        cout << nums[index] << " ";
    cout << endl;
}
  


