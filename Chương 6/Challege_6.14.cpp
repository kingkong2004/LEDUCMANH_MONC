#include <iostream>
using namespace std;

// Hàm ð? nh?p s? lý?ng cu?n ð?t hàng và ki?m tra d? li?u ð?u vào
int getOrderQuantity() {
    int quantity;
    do {
        cout << "Nh?p s? lý?ng cu?n ð?t hàng: ";
        cin >> quantity;
    } while (quantity < 1);
    return quantity;
}

// Hàm ð? nh?p s? lý?ng cu?n dây ð?ng trong kho và ki?m tra d? li?u ð?u vào
int getInventoryQuantity() {
    int quantity;
    do {
        cout << "Nh?p s? lý?ng cu?n dây ð?ng trong kho: ";
        cin >> quantity;
    } while (quantity < 0);
    return quantity;
}

// Hàm ð? nh?p s? lý?ng cu?n ð?t hàng trý?c và ki?m tra d? li?u ð?u vào
int getPreorderQuantity() {
    int quantity;
    do {
        cout << "Nh?p s? lý?ng cu?n ð?t hàng trý?c: ";
        cin >> quantity;
    } while (quantity < 1);
    return quantity;
}

// Hàm ð? nh?p s? lý?ng cu?n s?n sàng xu?t xý?ng t? kho hi?n t?i và ki?m tra d? li?u ð?u vào
int getReadyToShipQuantity() {
    int quantity;
    do {
        cout << "Nh?p s? lý?ng cu?n s?n sàng xu?t xý?ng t? kho hi?n t?i: ";
        cin >> quantity;
    } while (quantity < 0);
    return quantity;
}

// Hàm ð? nh?p thông tin v? phí v?n chuy?n và x? l? ð?c bi?t cho t?ng cu?n ð?t hàng
double getSpecialHandlingFee(int quantity) {
    double fee = 0.0;
    for (int i = 1; i <= quantity; i++) {
        double cuonFee;
        cout << "Nh?p phí v?n chuy?n và x? l? ð?c bi?t cho cu?n " << i << ": $";
        cin >> cuonFee;
        fee += cuonFee;
    }
    return fee;
}

// Hàm ð? tính và hi?n th? thông tin v? tr?ng thái ðõn hàng
void displayOrderStatus() {
    int orderQuantity = getOrderQuantity();
    int inventoryQuantity = getInventoryQuantity();
    int preorderQuantity = getPreorderQuantity();
    int readyToShipQuantity = getReadyToShipQuantity();
    double specialHandlingFee = getSpecialHandlingFee(orderQuantity);

    int totalReadyToShip = readyToShipQuantity + min(orderQuantity, inventoryQuantity);
    double totalShippingFee = totalReadyToShip * 100.0;
    int totalOrdersReadyToShip = min(orderQuantity, inventoryQuantity);

    cout << "\nTr?ng thái ðõn hàng:\n";
    cout << "S? lý?ng cu?n ð? s?n sàng xu?t xý?ng: " << totalReadyToShip << " cu?n\n";
    cout << "S? lý?ng cu?n ð?t hàng ð? s?n sàng ð? v?n chuy?n: " << totalOrdersReadyToShip << " cu?n\n";
    cout << "T?ng s? ph?n ð? s?n sàng ð? v?n chuy?n: $" << totalShippingFee << "\n";
    cout << "T?ng phí v?n chuy?n và x? l? trên ph?n hàng ð? s?n sàng ð? v?n chuy?n: $" << specialHandlingFee << "\n";
    cout << "T?ng s? ðõn hàng ð? s?n sàng ð? v?n chuy?n: " << totalOrdersReadyToShip << " ðõn hàng\n";
}

int main() {
    displayOrderStatus();

    return 0;
}
