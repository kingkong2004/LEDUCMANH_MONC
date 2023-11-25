#include <iostream>

// Hàm ð? t?o b?n sao c?a m?ng v?i các ph?n t? ð?o ngý?c
int* reverseCopyArray(const int arr[], int size) {
    int* reversedArr = new int[size];  // T?o m?t m?ng m?i

    for (int i = 0; i < size; i++) {
        reversedArr[i] = arr[size - 1 - i];  // Sao chép giá tr? t? m?ng g?c theo th? t? ngý?c
    }

    return reversedArr;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* reversedArr = reverseCopyArray(arr, size);

    std::cout << "M?ng g?c: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "M?ng sau khi ð?o ngý?c: ";
    for (int i = 0; i < size; i++) {
        std::cout << reversedArr[i] << " ";
    }
    std::cout << std::endl;

    delete[] reversedArr;  // Gi?i phóng b? nh? ð?ng

    return 0;
}
