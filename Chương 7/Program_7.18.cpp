#include <iostream>
using namespace std;

void showValues(int[], int); // Khai b�o h�m

int main()
{
    const int SIZE1 = 8; // K�ch th�?c c?a m?ng set1
    const int SIZE2 = 5; // K�ch th�?c c?a m?ng set2
    int set1[SIZE1] = {5, 10, 15, 20, 25, 30, 35, 40};
    int set2[SIZE2] = {2, 4, 6, 8, 10};

    // Truy?n m?ng set1 cho h�m showValues.
    showValues(set1, SIZE1);

    // Truy?n m?ng set2 cho h�m showValues.
    showValues(set2, SIZE2);

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
