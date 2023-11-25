#include <iostream>
using namespace std;

// H�m �? nh?p s? l�?ng nh�n vi�n trong c�ng ty
int getEmployeeCount() {
    int employeeCount;
    do {
        cout << "Nh?p s? l�?ng nh�n vi�n trong c�ng ty: ";
        cin >> employeeCount;
    } while (employeeCount < 1);
    return employeeCount;
}

// H�m �? nh?p s? ng�y ngh? vi?c c?a t?ng nh�n vi�n v� tr? v? t?ng s? ng�y ngh? vi?c
int getTotalAbsentDays(int employeeCount) {
    int totalAbsentDays = 0;
    for (int i = 0; i < employeeCount; i++) {
        int absentDays;
        do {
            cout << "Nh?p s? ng�y ngh? vi?c c?a nh�n vi�n " << i + 1 << ": ";
            cin >> absentDays;
        } while (absentDays < 0);
        totalAbsentDays += absentDays;
    }
    return totalAbsentDays;
}

// H�m t�nh v� tr? v? s? ng�y v?ng m?t trung b?nh
double calculateAverageAbsentDays(int employeeCount, int totalAbsentDays) {
    return static_cast<double>(totalAbsentDays) / employeeCount;
}

int main() {
    int employeeCount = getEmployeeCount();
    int totalAbsentDays = getTotalAbsentDays(employeeCount);

    double averageAbsentDays = calculateAverageAbsentDays(employeeCount, totalAbsentDays);

    cout << "S? ng�y v?ng m?t trung b?nh c?a nh�n vi�n trong c�ng ty: " << averageAbsentDays << " ng�y" << endl;

    return 0;
}
