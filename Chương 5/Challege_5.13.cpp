#include <iostream>
using namespace std;

int main() {
    int number;
    int smallest = INT_MAX; // Gi� tr? nh? nh?t ban �?u l� gi� tr? l?n nh?t c� th?
    int largest = INT_MIN; // Gi� tr? l?n nh?t ban �?u l� gi� tr? nh? nh?t c� th?

    cout << "Nh?p m?t lo?t s? nguy�n (s? d?ng -99 �? k?t th�c):\n";

    // V?ng l?p �? nh?p v� x�c �?nh s? l?n nh?t v� nh? nh?t
    while (true) {
        cout << "Nh?p s?: ";
        cin >> number;

        if (number == -99) {
            break; // K?t th�c v?ng l?p n?u ng�?i d�ng nh?p -99
        }

        if (number < smallest) {
            smallest = number; // C?p nh?t s? nh? nh?t
        }

        if (number > largest) {
            largest = number; // C?p nh?t s? l?n nh?t
        }
    }

    // Hi?n th? s? l?n nh?t v� s? nh? nh?t
    if (smallest == INT_MAX || largest == INT_MIN) {
        cout << "Kh�ng c� s? n�o ��?c nh?p." << endl;
    } else {
        cout << "S? nh? nh?t l�: " << smallest << endl;
        cout << "S? l?n nh?t l�: " << largest << endl;
    }

    return 0;
}
