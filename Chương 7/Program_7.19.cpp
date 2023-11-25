#include <iostream>
using namespace std;

// Khai b�o nguy�n m?u h�m
void doubleArray(int[], int);
void showValues(int[], int);

int main()
{
    const int ARRAY_SIZE = 7;
    int set[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7};

    // Hi?n th? gi� tr? ban �?u c?a m?ng.
    cout << "C�c gi� tr? trong m?ng l�:\n";
    showValues(set, ARRAY_SIZE);

    // G?p ��i c�c gi� tr? trong m?ng.
    doubleArray(set, ARRAY_SIZE);

    // Hi?n th? c�c gi� tr? sau khi g?i h�m doubleArray.
    cout << "Sau khi g?i h�m doubleArray, c�c gi� tr? l�:\n";
    showValues(set, ARRAY_SIZE);

    return 0;
}

// �?nh ngh?a h�m doubleArray
// H�m n�y g?p ��i gi� tr? c?a m?i ph?n t? trong m?ng nums.
void doubleArray(int nums[], int size)
{
    for (int index = 0; index < size; index++)
    {
        nums[index] *= 2;
    }
}

// �?nh ngh?a h�m showValues.
// H�m n�y nh?n m?t m?ng s? nguy�n v� k�ch th�?c c?a m?ng
// v� hi?n th? n?i dung c?a m?ng.
void showValues(int nums[], int size)
{
    for (int index = 0; index < size; index++)
    {
        cout << nums[index] << " ";
    }
    cout << endl;
}
