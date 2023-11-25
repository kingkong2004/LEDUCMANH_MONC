#include <iostream>
#include <algorithm>

// H�m �? t?m ch? �? trong m?ng s? nguy�n
int findMode(const int *arr, int size) {
    if (size <= 0) {
        return -1;  // Tr? v? -1 n?u m?ng r?ng ho?c kh�ng c� gi� tr? n�o.
    }

    // S?p x?p m?ng �? d? d�ng x�c �?nh ch? �?.
    int *sortedArr = new int[size];
    std::copy(arr, arr + size, sortedArr);
    std::sort(sortedArr, sortedArr + size);

    int currentMode = sortedArr[0];  // Gi� tr? xu?t hi?n th�?ng xuy�n nh?t ban �?u
    int currentModeCount = 1;  // S? l?n xu?t hi?n c?a gi� tr? ban �?u
    int maxMode = currentMode;  // L�u gi� tr? xu?t hi?n th�?ng xuy�n nh?t
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

    delete[] sortedArr;  // Gi?i ph�ng b? nh? �?ng

    return maxMode;
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int mode = findMode(arr, size);

    if (mode != -1) {
        std::cout << "Ch? �? c?a m?ng l�: " << mode << std::endl;
    } else {
        std::cout << "M?ng kh�ng c� ch? �?." << std::endl;
    }

    return 0;
}
