#include <iostream>
#include <iomanip>
using namespace std;

double fallsDistance(double time) {
    const double gravity = 9.8; // Tr?ng l?c
    double distance = 0.5 * gravity * time * time; // C�ng th?c t�nh kho?ng c�ch
    return distance;
}

int main() {
    cout << "Th?i gian (s)\tKho?ng c�ch (m)" << endl;
    for (int t = 1; t <= 10; t++) {
        double distance = fallsDistance(static_cast<double>(t));
        cout << t << "\t\t" << fixed << setprecision(2) << distance << endl;
    }
    return 0;
}
