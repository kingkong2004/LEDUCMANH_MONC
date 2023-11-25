#include <iostream>
#include <string>
using namespace std;

// H�m �? nh?p s? li?u b�n h�ng c?a m?t b? ph?n
double getSales(const string& department) {
    double sales;
    cout << "Nh?p s? li?u b�n h�ng c?a b? ph?n " << department << " trong qu?: ";
    cin >> sales;
    while (sales < 0) {
        cout << "S? li?u kh�ng h?p l?. Vui l?ng nh?p l?i: ";
        cin >> sales;
    }
    return sales;
}

// H�m �? x�c �?nh b? ph?n c� doanh s? b�n h�ng l?n nh?t
void findHighest(double& salesNE, double& salesNW, double& salesSE, double& salesSW) {
    string highestDepartment;
    double highestSales = 0.0;

    if (salesNE > highestSales) {
        highestSales = salesNE;
        highestDepartment = "��ng B?c";
    }
    if (salesNW > highestSales) {
        highestSales = salesNW;
        highestDepartment = "��ng Nam";
    }
    if (salesSE > highestSales) {
        highestSales = salesSE;
        highestDepartment = "T�y B?c";
    }
    if (salesSW > highestSales) {
        highestSales = salesSW;
        highestDepartment = "T�y Nam";
    }

    cout << "B? ph?n " << highestDepartment << " c� doanh s? b�n h�ng l?n nh?t: " << highestSales << " USD." << endl;
}

int main() {
    double salesNE, salesNW, salesSE, salesSW;

    salesNE = getSales("��ng B?c");
    salesNW = getSales("��ng Nam");
    salesSE = getSales("T�y B?c");
    salesSW = getSales("T�y Nam");

    findHighest(salesNE, salesNW, salesSE, salesSW);

    return 0;
}
