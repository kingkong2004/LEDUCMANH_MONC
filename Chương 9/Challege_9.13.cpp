#include <iostream>
#include <algorithm>

// Hàm ð? tính giá tr? trung b?nh c?a m?ng
double calculateMean(const int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

// Hàm ð? tính giá tr? trung v? c?a m?ng
double calculateMedian(const int arr[], int size) {
    if (size % 2 == 0) {
        int mid1 = (size - 1) / 2;
        int mid2 = size / 2;
        return (static_cast<double>(arr[mid1] + arr[mid2]) / 2.0);
    } else {
        int mid = size / 2;
        return static_cast<double>(arr[mid]);
    }
}

// Hàm ð? tính giá tr? m?t c?a m?ng
double calculateMode(const int arr[], int size) {
    std::map<int, int> frequency;
    for (int i = 0; i < size; i++) {
        frequency[arr[i]]++;
    }

    int mode = arr[0];
    int maxCount = 1;
    for (auto const& pair : frequency) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mode = pair.first;
        }
    }

    return mode;
}

int main() {
    int numStudents;
    std::cout << "Nh?p s? lý?ng h?c sinh ðý?c kh?o sát: ";
    std::cin >> numStudents;

    if (numStudents <= 0) {
        std::cout << "S? lý?ng h?c sinh không h?p l?." << std::endl;
        return 1;
    }

    int* movieCount = new int[numStudents];

    for (int i = 0; i < numStudents; i++) {
        do {
            std::cout << "Nh?p s? lý?ng phim mà h?c sinh " << i + 1 << " ð? xem: ";
            std::cin >> movieCount[i];
        } while (movieCount[i] < 0);
    }

    double mean = calculateMean(movieCount, numStudents);
    double median = calculateMedian(movieCount, numStudents);
    double mode = calculateMode(movieCount, numStudents);

    std::cout << "Giá tr? trung b?nh: " << mean << std::endl;
    std::cout << "Giá tr? trung v?: " << median << std::endl;
    std::cout << "Giá tr? m?t: " << mode << std::endl;

    delete[] movieCount;  // Gi?i phóng b? nh? ð?ng

    return 0;
}
