#include <iostream>
using namespace std;

// H�m t�nh t?ng chi ph� cho b?nh nh�n n?i tr�
double calculateInpatientCost(int days, double dailyRate, double medicationCost, double serviceCost) {
    if (days < 0 || dailyRate < 0 || medicationCost < 0 || serviceCost < 0) {
        return -1.0; // D? li?u kh�ng h?p l?
    }
    return (days * dailyRate) + medicationCost + serviceCost;
}

// H�m t�nh t?ng chi ph� cho b?nh nh�n ngo?i tr�
double calculateOutpatientCost(double medicationCost, double serviceCost) {
    if (medicationCost < 0 || serviceCost < 0) {
        return -1.0; // D? li?u kh�ng h?p l?
    }
    return medicationCost + serviceCost;
}

int main() {
    char patientType;
    cout << "Lo?i b?nh nh�n (I: n?i tr�, O: ngo?i tr�): ";
    cin >> patientType;

    if (patientType == 'I' || patientType == 'i') {
        int days;
        double dailyRate, medicationCost, serviceCost;

        cout << "S? ng�y n?m vi?n: ";
        cin >> days;
        cout << "T? gi� h�ng ng�y: ";
        cin >> dailyRate;
        cout << "Ti?n thu?c b?nh vi?n: $";
        cin >> medicationCost;
        cout << "Ph� d?ch v? b?nh vi?n: $";
        cin >> serviceCost;

        double totalCost = calculateInpatientCost(days, dailyRate, medicationCost, serviceCost);

        if (totalCost >= 0) {
            cout << "T?ng chi ph� cho b?nh nh�n n?i tr�: $" << totalCost << endl;
        } else {
            cout << "D? li?u kh�ng h?p l?." << endl;
        }
    } else if (patientType == 'O' || patientType == 'o') {
        double medicationCost, serviceCost;

        cout << "Ti?n thu?c b?nh vi?n: $";
        cin >> medicationCost;
        cout << "Ph� d?ch v? b?nh vi?n: $";
        cin >> serviceCost;

        double totalCost = calculateOutpatientCost(medicationCost, serviceCost);

        if (totalCost >= 0) {
            cout << "T?ng chi ph� cho b?nh nh�n ngo?i tr�: $" << totalCost << endl;
        } else {
            cout << "D? li?u kh�ng h?p l?." << endl;
        }
    } else {
        cout << "Lo?i b?nh nh�n kh�ng h?p l?." << endl;
    }

    return 0;
}
