#include <iostream>
#include <algorithm>

// H�m �? t�nh gi� tr? trung b?nh c?a m?ng
double calculateMean(const int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

// H�m �? t�nh gi� tr? trung v? c?a m?ng
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

// H�m �? t�nh gi� tr? m?t c?a m?ng
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
    std::cout << "Nh?p s? l�?ng h?c sinh ��?c kh?o s�t: ";
    std::cin >> numStudents;

    if (numStudents <= 0) {
        std::cout << "S? l�?ng h?c sinh kh�ng h?p l?." << std::endl;
        return 1;
    }

    int* movieCount = new int[numStudents];

    for (int i = 0; i < numStudents; i++) {
        do {
            std::cout << "Nh?p s? l�?ng phim m� h?c sinh " << i + 1 << " �? xem: ";
            std::cin >> movieCount[i];
        } while (movieCount[i] < 0);
    }

    double mean = calculateMean(movieCount, numStudents);
    double median = calculateMedian(movieCount, numStudents);
    double mode = calculateMode(movieCount, numStudents);

    std::cout << "Gi� tr? trung b?nh: " << mean << std::endl;
    std::cout << "Gi� tr? trung v?: " << median << std::endl;
    std::cout << "Gi� tr? m?t: " << mode << std::endl;

    delete[] movieCount;  // Gi?i ph�ng b? nh? �?ng

    return 0;
}
