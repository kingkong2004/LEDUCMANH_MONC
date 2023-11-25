#include <iostream>
using namespace std;

// Hàm yêu c?u ngý?i dùng nh?p chi?u dài và tr? v? giá tr? g?p ðôi
double getLength() {
    double length;
    cout << "Nh?p chi?u dài c?a h?nh ch? nh?t: ";
    cin >> length;
    return length * 2;
}

// Hàm yêu c?u ngý?i dùng nh?p chi?u r?ng và tr? v? giá tr?
double getWidth() {
    double width;
    cout << "Nh?p chi?u r?ng c?a h?nh ch? nh?t: ";
    cin >> width;
    return width;
}

// Hàm tính di?n tích d?a trên chi?u dài và chi?u r?ng
double getArea(double length, double width) {
    return length * width;
}

// Hàm hi?n th? d? li?u c?a h?nh ch? nh?t
void displayData(double length, double width, double area) {
    cout << "Chi?u dài: " << length / 2 << endl;
    cout << "Chi?u r?ng: " << width << endl;
    cout << "Di?n tích: " << area << endl;
}

int main() {
    double length, width, area;

    length = getLength();
    width = getWidth();
    area = getArea(length / 2, width);

    displayData(length, width, area);

    return 0;
}
