#include <iostream>

int doSomething(int* x, int* y) {
    int tamThoi = *x;
    *x = *y * 10;
    *y = tamThoi * 10;
    return (*x) + (*y);
}

int main() {
    int a, b;

    std::cout << "Nh?p giá tr? a: ";
    std::cin >> a;

    std::cout << "Nh?p giá tr? b: ";
    std::cin >> b;

    int ketQua = doSomething(&a, &b);

    std::cout << "Giá tr? a sau khi x? l?: " << a << std::endl;
    std::cout << "Giá tr? b sau khi x? l?: " << b << std::endl;
    std::cout << "K?t qu?: " << ketQua << std::endl;

    return 0;
}
