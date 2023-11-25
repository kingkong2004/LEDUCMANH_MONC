#include <iostream>
using namespace std;

double kineticEnergy(double mass, double velocity) {
    const double KE = 0.5 * mass * velocity * velocity;
    return KE;
}

int main() {
    double mass, velocity;

    cout << "Nh?p kh?i lý?ng c?a v?t (kg): ";
    cin >> mass;
    cout << "Nh?p v?n t?c c?a v?t (m/s): ";
    cin >> velocity;

    double energy = kineticEnergy(mass, velocity);

    cout << "Ð?ng nãng c?a v?t là " << energy << " joules." << endl;

    return 0;
}
