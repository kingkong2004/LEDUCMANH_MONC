#include <iostream>

// H�m �? t?o m?ng m?i v?i k�ch th�?c g?p ��i v� sao ch�p n?i dung m?ng �?i s?
int* doubleSizeArray(const int arr[], int size) {
    int newSize = size * 2;  // K�ch th�?c m?i g?p ��i k�ch th�?c m?ng �?i s?
    int* newArray = new int[newSize];  // T?o m?ng m?i v?i k�ch th�?c m?i

    for (int i = 0; i < newSize; i++) {
        if (i < size) {
            newArray[i] = arr[i];  // Sao ch�p n?i dung t? m?ng �?i s?
        } else {
            newArray[i] = 0;  // Kh?i t?o c�c ph?n t? kh�ng ��?c s? d?ng v?i gi� tr? 0
        }
    }

    return newArray;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* newArray = doubleSizeArray(arr, size);

    std::cout << "M?ng g?c: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "M?ng m?i: ";
    for (int i = 0; i < size * 2; i++) {
        std::cout << newArray[i] << " ";
    }
    std::cout << std::endl;

    delete[] newArray;  // Gi?i ph�ng b? nh? �?ng

    return 0;
}
