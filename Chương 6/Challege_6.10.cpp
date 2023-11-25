#include <iostream>
using namespace std;

// H�m y�u c?u ng�?i d�ng nh?p chi?u d�i v� tr? v? gi� tr? g?p ��i
double getLength() {
    double length;
    cout << "Nh?p chi?u d�i c?a h?nh ch? nh?t: ";
    cin >> length;
    return length * 2;
}

// H�m y�u c?u ng�?i d�ng nh?p chi?u r?ng v� tr? v? gi� tr?
double getWidth() {
    double width;
    cout << "Nh?p chi?u r?ng c?a h?nh ch? nh?t: ";
    cin >> width;
    return width;
}

// H�m t�nh di?n t�ch d?a tr�n chi?u d�i v� chi?u r?ng
double getArea(double length, double width) {
    return length * width;
}

// H�m hi?n th? d? li?u c?a h?nh ch? nh?t
void displayData(double length, double width, double area) {
    cout << "Chi?u d�i: " << length / 2 << endl;
    cout << "Chi?u r?ng: " << width << endl;
    cout << "Di?n t�ch: " << area << endl;
}

int main() {
    double length, width, area;

    length = getLength();
    width = getWidth();
    area = getArea(length / 2, width);

    displayData(length, width, area);

    return 0;
}
