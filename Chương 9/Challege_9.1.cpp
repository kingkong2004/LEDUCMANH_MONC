#include <iostream>

// Hàm ð? c?p phát ð?ng m?t m?ng s? nguyên
int* capPhatMangSoNguyen(int kichThuoc) {
    int* arr = new int[kichThuoc]; // C?p phát ð?ng m?t m?ng s? nguyên có kích thý?c ð? ch? ð?nh
    return arr; // Tr? v? con tr? ð?n m?ng ð? c?p phát
}

int main() {
    int kichThuoc;

    std::cout << "Nh?p kích thý?c c?a m?ng s? nguyên: ";
    std::cin >> kichThuoc;

    if (kichThuoc <= 0) {
        std::cout << "Kích thý?c m?ng không h?p l?. K?t thúc chýõng tr?nh." << std::endl;
        return 1; // Thoát v?i m? l?i
    }

    int* mangDong = capPhatMangSoNguyen(kichThuoc);

    // Ki?m tra xem vi?c c?p phát b? nh? có thành công không
    if (mangDong == nullptr) {
        std::cout << "C?p phát b? nh? th?t b?i. K?t thúc chýõng tr?nh." << std::endl;
        return 1; // Thoát v?i m? l?i
    }

    // Bây gi? b?n có th? s? d?ng mangDong gi?ng nhý m?t m?ng thông thý?ng
    std::cout << "Các ph?n t? trong m?ng ð?ng: ";
    for (int i = 0; i < kichThuoc; i++) {
        mangDong[i] = i * 10; // Gán m?t s? giá tr? cho m?ng ð?ng
        std::cout << mangDong[i] << " ";
    }

    // Ð?ng quên gi?i phóng b? nh? khi ð? hoàn thành vi?c s? d?ng m?ng ð?ng
    delete[] mangDong;

    return 0;
}
