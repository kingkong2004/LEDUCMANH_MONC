#include <iostream>
using namespace std;

void showValues(int[], int); // Khai báo hàm

int main()
{
    const int SIZE1 = 8; // Kích thý?c c?a m?ng set1
    const int SIZE2 = 5; // Kích thý?c c?a m?ng set2
    int set1[SIZE1] = {5, 10, 15, 20, 25, 30, 35, 40};
    int set2[SIZE2] = {2, 4, 6, 8, 10};

    // Truy?n m?ng set1 cho hàm showValues.
    showValues(set1, SIZE1);

    // Truy?n m?ng set2 cho hàm showValues.
    showValues(set2, SIZE2);

    return 0;
}

// Ð?nh ngh?a hàm showValues.
// Hàm này ch?p nh?n m?t m?ng các s? nguyên và
// kích thý?c c?a m?ng là ð?i s? c?a nó.
// N?i dung c?a m?ng s? ðý?c hi?n th?.
void showValues(int nums[], int size)
{
    for (int index = 0; index < size; index++)
        cout << nums[index] << " ";
    cout << endl;
}
