#include <iostream>
using namespace std;

const double COST_PER_GALLON = 25.00;

// Hàm tính chi phí sõn m?t ph?ng
void calculateRoomCost(int roomArea, double paintPrice, int& gallonsNeeded, double& laborCost, double& paintCost, double& totalCost) {
    gallonsNeeded = roomArea / 110 + 1;  // S? gallon c?n sõn
    laborCost = 8 * gallonsNeeded * COST_PER_GALLON;  // Chi phí lao ð?ng
    paintCost = gallonsNeeded * paintPrice;  // Chi phí sõn
    totalCost = laborCost + paintCost;  // T?ng chi phí
}

int main() {
    int numRooms;
    double paintPrice;
    int roomArea;

    cout << "S? lý?ng ph?ng c?n sõn: ";
    cin >> numRooms;
    cout << "Giá sõn m?i gallon: $";
    cin >> paintPrice;

    if (numRooms < 1 || paintPrice < 10.00) {
        cout << "D? li?u không h?p l?." << endl;
        return 1;
    }

    double totalPaintCost = 0;
    double totalLaborCost = 0;
    double totalCost = 0;

    for (int i = 0; i < numRooms; i++) {
        cout << "Di?n tích tý?ng trong ph?ng " << (i + 1) << " (feet vuông): ";
        cin >> roomArea;

        if (roomArea < 0) {
            cout << "Di?n tích tý?ng không h?p l?." << endl;
            return 1;
        }

        int gallonsNeeded;
        double laborCost, paintCost, roomTotalCost;

        calculateRoomCost(roomArea, paintPrice, gallonsNeeded, laborCost, paintCost, roomTotalCost);

        totalPaintCost += paintCost;
        totalLaborCost += laborCost;
        totalCost += roomTotalCost;

        cout << "Ph?ng " << (i + 1) << ":" << endl;
        cout << "S? gallon sõn c?n thi?t: " << gallonsNeeded << endl;
        cout << "S? gi? lao ð?ng c?n thi?t: " << 8 * gallonsNeeded << " gi?" << endl;
        cout << "Chi phí sõn: $" << paintCost << endl;
        cout << "Chi phí lao ð?ng: $" << laborCost << endl;
        cout << "T?ng chi phí ph?ng " << (i + 1) << ": $" << roomTotalCost << endl;
    }

    cout << "T?ng chi phí sõn: $" << totalCost << endl;

    return 0;
}
