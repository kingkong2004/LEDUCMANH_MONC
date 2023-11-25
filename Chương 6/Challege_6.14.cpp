#include <iostream>
using namespace std;

// H�m �? nh?p s? l�?ng cu?n �?t h�ng v� ki?m tra d? li?u �?u v�o
int getOrderQuantity() {
    int quantity;
    do {
        cout << "Nh?p s? l�?ng cu?n �?t h�ng: ";
        cin >> quantity;
    } while (quantity < 1);
    return quantity;
}

// H�m �? nh?p s? l�?ng cu?n d�y �?ng trong kho v� ki?m tra d? li?u �?u v�o
int getInventoryQuantity() {
    int quantity;
    do {
        cout << "Nh?p s? l�?ng cu?n d�y �?ng trong kho: ";
        cin >> quantity;
    } while (quantity < 0);
    return quantity;
}

// H�m �? nh?p s? l�?ng cu?n �?t h�ng tr�?c v� ki?m tra d? li?u �?u v�o
int getPreorderQuantity() {
    int quantity;
    do {
        cout << "Nh?p s? l�?ng cu?n �?t h�ng tr�?c: ";
        cin >> quantity;
    } while (quantity < 1);
    return quantity;
}

// H�m �? nh?p s? l�?ng cu?n s?n s�ng xu?t x�?ng t? kho hi?n t?i v� ki?m tra d? li?u �?u v�o
int getReadyToShipQuantity() {
    int quantity;
    do {
        cout << "Nh?p s? l�?ng cu?n s?n s�ng xu?t x�?ng t? kho hi?n t?i: ";
        cin >> quantity;
    } while (quantity < 0);
    return quantity;
}

// H�m �? nh?p th�ng tin v? ph� v?n chuy?n v� x? l? �?c bi?t cho t?ng cu?n �?t h�ng
double getSpecialHandlingFee(int quantity) {
    double fee = 0.0;
    for (int i = 1; i <= quantity; i++) {
        double cuonFee;
        cout << "Nh?p ph� v?n chuy?n v� x? l? �?c bi?t cho cu?n " << i << ": $";
        cin >> cuonFee;
        fee += cuonFee;
    }
    return fee;
}

// H�m �? t�nh v� hi?n th? th�ng tin v? tr?ng th�i ��n h�ng
void displayOrderStatus() {
    int orderQuantity = getOrderQuantity();
    int inventoryQuantity = getInventoryQuantity();
    int preorderQuantity = getPreorderQuantity();
    int readyToShipQuantity = getReadyToShipQuantity();
    double specialHandlingFee = getSpecialHandlingFee(orderQuantity);

    int totalReadyToShip = readyToShipQuantity + min(orderQuantity, inventoryQuantity);
    double totalShippingFee = totalReadyToShip * 100.0;
    int totalOrdersReadyToShip = min(orderQuantity, inventoryQuantity);

    cout << "\nTr?ng th�i ��n h�ng:\n";
    cout << "S? l�?ng cu?n �? s?n s�ng xu?t x�?ng: " << totalReadyToShip << " cu?n\n";
    cout << "S? l�?ng cu?n �?t h�ng �? s?n s�ng �? v?n chuy?n: " << totalOrdersReadyToShip << " cu?n\n";
    cout << "T?ng s? ph?n �? s?n s�ng �? v?n chuy?n: $" << totalShippingFee << "\n";
    cout << "T?ng ph� v?n chuy?n v� x? l? tr�n ph?n h�ng �? s?n s�ng �? v?n chuy?n: $" << specialHandlingFee << "\n";
    cout << "T?ng s? ��n h�ng �? s?n s�ng �? v?n chuy?n: " << totalOrdersReadyToShip << " ��n h�ng\n";
}

int main() {
    displayOrderStatus();

    return 0;
}
