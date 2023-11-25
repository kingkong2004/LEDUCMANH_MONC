#include <iostream>

// Hàm ð? t?o m?ng m?i v?i kích thý?c g?p ðôi và sao chép n?i dung m?ng ð?i s?
int* doubleSizeArray(const int arr[], int size) {
    int newSize = size * 2;  // Kích thý?c m?i g?p ðôi kích thý?c m?ng ð?i s?
    int* newArray = new int[newSize];  // T?o m?ng m?i v?i kích thý?c m?i

    for (int i = 0; i < newSize; i++) {
        if (i < size) {
            newArray[i] = arr[i];  // Sao chép n?i dung t? m?ng ð?i s?
        } else {
            newArray[i] = 0;  // Kh?i t?o các ph?n t? không ðý?c s? d?ng v?i giá tr? 0
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

    delete[] newArray;  // Gi?i phóng b? nh? ð?ng

    return 0;
}
