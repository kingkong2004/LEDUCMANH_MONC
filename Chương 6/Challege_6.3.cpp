#include <iostream>
#include <string>
using namespace std;

// Hàm ð? nh?p s? li?u bán hàng c?a m?t b? ph?n
double getSales(const string& department) {
    double sales;
    cout << "Nh?p s? li?u bán hàng c?a b? ph?n " << department << " trong qu?: ";
    cin >> sales;
    while (sales < 0) {
        cout << "S? li?u không h?p l?. Vui l?ng nh?p l?i: ";
        cin >> sales;
    }
    return sales;
}

// Hàm ð? xác ð?nh b? ph?n có doanh s? bán hàng l?n nh?t
void findHighest(double& salesNE, double& salesNW, double& salesSE, double& salesSW) {
    string highestDepartment;
    double highestSales = 0.0;

    if (salesNE > highestSales) {
        highestSales = salesNE;
        highestDepartment = "Ðông B?c";
    }
    if (salesNW > highestSales) {
        highestSales = salesNW;
        highestDepartment = "Ðông Nam";
    }
    if (salesSE > highestSales) {
        highestSales = salesSE;
        highestDepartment = "Tây B?c";
    }
    if (salesSW > highestSales) {
        highestSales = salesSW;
        highestDepartment = "Tây Nam";
    }

    cout << "B? ph?n " << highestDepartment << " có doanh s? bán hàng l?n nh?t: " << highestSales << " USD." << endl;
}

int main() {
    double salesNE, salesNW, salesSE, salesSW;

    salesNE = getSales("Ðông B?c");
    salesNW = getSales("Ðông Nam");
    salesSE = getSales("Tây B?c");
    salesSW = getSales("Tây Nam");

    findHighest(salesNE, salesNW, salesSE, salesSW);

    return 0;
}
