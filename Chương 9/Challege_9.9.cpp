#include <iostream>
#include <algorithm>

// Hàm ð? t?m ch? ð? trong m?ng s? nguyên
int findMode(const int *arr, int size) {
    if (size <= 0) {
        return -1;  // Tr? v? -1 n?u m?ng r?ng ho?c không có giá tr? nào.
    }

    // S?p x?p m?ng ð? d? dàng xác ð?nh ch? ð?.
    int *sortedArr = new int[size];
    std::copy(arr, arr + size, sortedArr);
    std::sort(sortedArr, sortedArr + size);

    int currentMode = sortedArr[0];  // Giá tr? xu?t hi?n thý?ng xuyên nh?t ban ð?u
    int currentModeCount = 1;  // S? l?n xu?t hi?n c?a giá tr? ban ð?u
    int maxMode = currentMode;  // Lýu giá tr? xu?t hi?n thý?ng xuyên nh?t
    int maxModeCount = currentModeCount;  // S? l?n xu?t hi?n nhi?u nh?t

    for (int i = 1; i < size; i++) {
        if (sortedArr[i] == sortedArr[i - 1]) {
            currentModeCount++;
        } else {
            currentMode = sortedArr[i];
            currentModeCount = 1;
        }

        if (currentModeCount > maxModeCount) {
            maxMode = currentMode;
            maxModeCount = currentModeCount;
        }
    }

    delete[] sortedArr;  // Gi?i phóng b? nh? ð?ng

    return maxMode;
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int mode = findMode(arr, size);

    if (mode != -1) {
        std::cout << "Ch? ð? c?a m?ng là: " << mode << std::endl;
    } else {
        std::cout << "M?ng không có ch? ð?." << std::endl;
    }

    return 0;
}
