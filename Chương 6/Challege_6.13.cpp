#include <iostream>
using namespace std;

// Hàm ð? nh?p s? lý?ng nhân viên trong công ty
int getEmployeeCount() {
    int employeeCount;
    do {
        cout << "Nh?p s? lý?ng nhân viên trong công ty: ";
        cin >> employeeCount;
    } while (employeeCount < 1);
    return employeeCount;
}

// Hàm ð? nh?p s? ngày ngh? vi?c c?a t?ng nhân viên và tr? v? t?ng s? ngày ngh? vi?c
int getTotalAbsentDays(int employeeCount) {
    int totalAbsentDays = 0;
    for (int i = 0; i < employeeCount; i++) {
        int absentDays;
        do {
            cout << "Nh?p s? ngày ngh? vi?c c?a nhân viên " << i + 1 << ": ";
            cin >> absentDays;
        } while (absentDays < 0);
        totalAbsentDays += absentDays;
    }
    return totalAbsentDays;
}

// Hàm tính và tr? v? s? ngày v?ng m?t trung b?nh
double calculateAverageAbsentDays(int employeeCount, int totalAbsentDays) {
    return static_cast<double>(totalAbsentDays) / employeeCount;
}

int main() {
    int employeeCount = getEmployeeCount();
    int totalAbsentDays = getTotalAbsentDays(employeeCount);

    double averageAbsentDays = calculateAverageAbsentDays(employeeCount, totalAbsentDays);

    cout << "S? ngày v?ng m?t trung b?nh c?a nhân viên trong công ty: " << averageAbsentDays << " ngày" << endl;

    return 0;
}
