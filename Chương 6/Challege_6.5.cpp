#include <iostream>
#include <iomanip>
using namespace std;

double fallsDistance(double time) {
    const double gravity = 9.8; // Tr?ng l?c
    double distance = 0.5 * gravity * time * time; // Công th?c tính kho?ng cách
    return distance;
}

int main() {
    cout << "Th?i gian (s)\tKho?ng cách (m)" << endl;
    for (int t = 1; t <= 10; t++) {
        double distance = fallsDistance(static_cast<double>(t));
        cout << t << "\t\t" << fixed << setprecision(2) << distance << endl;
    }
    return 0;
}
