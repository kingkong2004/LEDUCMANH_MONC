#include <iostream>

// H�m �? c?p ph�t �?ng m?t m?ng s? nguy�n
int* capPhatMangSoNguyen(int kichThuoc) {
    int* arr = new int[kichThuoc]; // C?p ph�t �?ng m?t m?ng s? nguy�n c� k�ch th�?c �? ch? �?nh
    return arr; // Tr? v? con tr? �?n m?ng �? c?p ph�t
}

int main() {
    int kichThuoc;

    std::cout << "Nh?p k�ch th�?c c?a m?ng s? nguy�n: ";
    std::cin >> kichThuoc;

    if (kichThuoc <= 0) {
        std::cout << "K�ch th�?c m?ng kh�ng h?p l?. K?t th�c ch��ng tr?nh." << std::endl;
        return 1; // Tho�t v?i m? l?i
    }

    int* mangDong = capPhatMangSoNguyen(kichThuoc);

    // Ki?m tra xem vi?c c?p ph�t b? nh? c� th�nh c�ng kh�ng
    if (mangDong == nullptr) {
        std::cout << "C?p ph�t b? nh? th?t b?i. K?t th�c ch��ng tr?nh." << std::endl;
        return 1; // Tho�t v?i m? l?i
    }

    // B�y gi? b?n c� th? s? d?ng mangDong gi?ng nh� m?t m?ng th�ng th�?ng
    std::cout << "C�c ph?n t? trong m?ng �?ng: ";
    for (int i = 0; i < kichThuoc; i++) {
        mangDong[i] = i * 10; // G�n m?t s? gi� tr? cho m?ng �?ng
        std::cout << mangDong[i] << " ";
    }

    // �?ng qu�n gi?i ph�ng b? nh? khi �? ho�n th�nh vi?c s? d?ng m?ng �?ng
    delete[] mangDong;

    return 0;
}
