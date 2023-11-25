#include <iostream>
using namespace std;

// Khai báo nguyên m?u hàm
void doubleArray(int[], int);
void showValues(int[], int);

int main()
{
    const int ARRAY_SIZE = 7;
    int set[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7};

    // Hi?n th? giá tr? ban ð?u c?a m?ng.
    cout << "Các giá tr? trong m?ng là:\n";
    showValues(set, ARRAY_SIZE);

    // G?p ðôi các giá tr? trong m?ng.
    doubleArray(set, ARRAY_SIZE);

    // Hi?n th? các giá tr? sau khi g?i hàm doubleArray.
    cout << "Sau khi g?i hàm doubleArray, các giá tr? là:\n";
    showValues(set, ARRAY_SIZE);

    return 0;
}

// Ð?nh ngh?a hàm doubleArray
// Hàm này g?p ðôi giá tr? c?a m?i ph?n t? trong m?ng nums.
void doubleArray(int nums[], int size)
{
    for (int index = 0; index < size; index++)
    {
        nums[index] *= 2;
    }
}

// Ð?nh ngh?a hàm showValues.
// Hàm này nh?n m?t m?ng s? nguyên và kích thý?c c?a m?ng
// và hi?n th? n?i dung c?a m?ng.
void showValues(int nums[], int size)
{
    for (int index = 0; index < size; index++)
    {
        cout << nums[index] << " ";
    }
    cout << endl;
}
