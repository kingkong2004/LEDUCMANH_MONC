#include <iostream>
using namespace std;

// Hàm tính t?ng chi phí cho b?nh nhân n?i trú
double calculateInpatientCost(int days, double dailyRate, double medicationCost, double serviceCost) {
    if (days < 0 || dailyRate < 0 || medicationCost < 0 || serviceCost < 0) {
        return -1.0; // D? li?u không h?p l?
    }
    return (days * dailyRate) + medicationCost + serviceCost;
}

// Hàm tính t?ng chi phí cho b?nh nhân ngo?i trú
double calculateOutpatientCost(double medicationCost, double serviceCost) {
    if (medicationCost < 0 || serviceCost < 0) {
        return -1.0; // D? li?u không h?p l?
    }
    return medicationCost + serviceCost;
}

int main() {
    char patientType;
    cout << "Lo?i b?nh nhân (I: n?i trú, O: ngo?i trú): ";
    cin >> patientType;

    if (patientType == 'I' || patientType == 'i') {
        int days;
        double dailyRate, medicationCost, serviceCost;

        cout << "S? ngày n?m vi?n: ";
        cin >> days;
        cout << "T? giá hàng ngày: ";
        cin >> dailyRate;
        cout << "Ti?n thu?c b?nh vi?n: $";
        cin >> medicationCost;
        cout << "Phí d?ch v? b?nh vi?n: $";
        cin >> serviceCost;

        double totalCost = calculateInpatientCost(days, dailyRate, medicationCost, serviceCost);

        if (totalCost >= 0) {
            cout << "T?ng chi phí cho b?nh nhân n?i trú: $" << totalCost << endl;
        } else {
            cout << "D? li?u không h?p l?." << endl;
        }
    } else if (patientType == 'O' || patientType == 'o') {
        double medicationCost, serviceCost;

        cout << "Ti?n thu?c b?nh vi?n: $";
        cin >> medicationCost;
        cout << "Phí d?ch v? b?nh vi?n: $";
        cin >> serviceCost;

        double totalCost = calculateOutpatientCost(medicationCost, serviceCost);

        if (totalCost >= 0) {
            cout << "T?ng chi phí cho b?nh nhân ngo?i trú: $" << totalCost << endl;
        } else {
            cout << "D? li?u không h?p l?." << endl;
        }
    } else {
        cout << "Lo?i b?nh nhân không h?p l?." << endl;
    }

    return 0;
}
