#include <iostream>

// Hàm ð? t?o m?ng m?i l?n hõn m?ng ð?i s? và sao chép các ph?n t?
int* shiftArray(const int arr[], int size) {
    int newSize = size + 1;  // Kích thý?c m?i l?n hõn m?t ph?n t?
    int* newArray = new int[newSize];  // T?o m?ng m?i v?i kích thý?c m?i

    newArray[0] = 0;  // Ph?n t? ð?u tiên c?a m?ng m?i là 0

    for (int i = 0; i < size; i++) {
        newArray[i + 1] = arr[i];  // Sao chép các ph?n t? c?a m?ng ð?i s? sang m?ng m?i
    }

    return newArray;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* newArray = shiftArray(arr, size);

    std::cout << "M?ng g?c: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "M?ng m?i: ";
    for (int i = 0; i < size + 1; i++) {
        std::cout << newArray[i] << " ";
    }
    std::cout << std::endl;

    delete[] newArray;  // Gi?i phóng b? nh? ð?ng

    return 0;
}
