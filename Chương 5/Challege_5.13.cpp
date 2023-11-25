#include <iostream>
using namespace std;

int main() {
    int number;
    int smallest = INT_MAX; // Giá tr? nh? nh?t ban ð?u là giá tr? l?n nh?t có th?
    int largest = INT_MIN; // Giá tr? l?n nh?t ban ð?u là giá tr? nh? nh?t có th?

    cout << "Nh?p m?t lo?t s? nguyên (s? d?ng -99 ð? k?t thúc):\n";

    // V?ng l?p ð? nh?p và xác ð?nh s? l?n nh?t và nh? nh?t
    while (true) {
        cout << "Nh?p s?: ";
        cin >> number;

        if (number == -99) {
            break; // K?t thúc v?ng l?p n?u ngý?i dùng nh?p -99
        }

        if (number < smallest) {
            smallest = number; // C?p nh?t s? nh? nh?t
        }

        if (number > largest) {
            largest = number; // C?p nh?t s? l?n nh?t
        }
    }

    // Hi?n th? s? l?n nh?t và s? nh? nh?t
    if (smallest == INT_MAX || largest == INT_MIN) {
        cout << "Không có s? nào ðý?c nh?p." << endl;
    } else {
        cout << "S? nh? nh?t là: " << smallest << endl;
        cout << "S? l?n nh?t là: " << largest << endl;
    }

    return 0;
}
