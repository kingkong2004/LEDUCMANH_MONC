#include <iostream>
using namespace std;

void showValues(int[], int); // Khai báo hàm

int main()
{
    const int ARRAY_SIZE = 8;
    int numbers[ARRAY_SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

    showValues(numbers, ARRAY_SIZE);
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
  


