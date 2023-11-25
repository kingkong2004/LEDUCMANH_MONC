#include <iostream>
using namespace std;

const double COST_PER_GALLON = 25.00;

// H�m t�nh chi ph� s�n m?t ph?ng
void calculateRoomCost(int roomArea, double paintPrice, int& gallonsNeeded, double& laborCost, double& paintCost, double& totalCost) {
    gallonsNeeded = roomArea / 110 + 1;  // S? gallon c?n s�n
    laborCost = 8 * gallonsNeeded * COST_PER_GALLON;  // Chi ph� lao �?ng
    paintCost = gallonsNeeded * paintPrice;  // Chi ph� s�n
    totalCost = laborCost + paintCost;  // T?ng chi ph�
}

int main() {
    int numRooms;
    double paintPrice;
    int roomArea;

    cout << "S? l�?ng ph?ng c?n s�n: ";
    cin >> numRooms;
    cout << "Gi� s�n m?i gallon: $";
    cin >> paintPrice;

    if (numRooms < 1 || paintPrice < 10.00) {
        cout << "D? li?u kh�ng h?p l?." << endl;
        return 1;
    }

    double totalPaintCost = 0;
    double totalLaborCost = 0;
    double totalCost = 0;

    for (int i = 0; i < numRooms; i++) {
        cout << "Di?n t�ch t�?ng trong ph?ng " << (i + 1) << " (feet vu�ng): ";
        cin >> roomArea;

        if (roomArea < 0) {
            cout << "Di?n t�ch t�?ng kh�ng h?p l?." << endl;
            return 1;
        }

        int gallonsNeeded;
        double laborCost, paintCost, roomTotalCost;

        calculateRoomCost(roomArea, paintPrice, gallonsNeeded, laborCost, paintCost, roomTotalCost);

        totalPaintCost += paintCost;
        totalLaborCost += laborCost;
        totalCost += roomTotalCost;

        cout << "Ph?ng " << (i + 1) << ":" << endl;
        cout << "S? gallon s�n c?n thi?t: " << gallonsNeeded << endl;
        cout << "S? gi? lao �?ng c?n thi?t: " << 8 * gallonsNeeded << " gi?" << endl;
        cout << "Chi ph� s�n: $" << paintCost << endl;
        cout << "Chi ph� lao �?ng: $" << laborCost << endl;
        cout << "T?ng chi ph� ph?ng " << (i + 1) << ": $" << roomTotalCost << endl;
    }

    cout << "T?ng chi ph� s�n: $" << totalCost << endl;

    return 0;
}
