#include <iostream>
using namespace std;

int main() {
    int numYears;
    double totalRainfall = 0.0;
    int totalMonths = 0;

    // Nh?p s? nãm v?i ki?m tra ð?u vào
    do {
        cout << "Nh?p s? nãm (ít nh?t 1 nãm): ";
        cin >> numYears;

        if (numYears < 1) {
            cout << "S? nãm không h?p l?. Vui l?ng nh?p s? l?n hõn ho?c b?ng 1." << endl;
        }
    } while (numYears < 1);

    // V?ng l?p ngoài l?p qua các nãm
    for (int year = 1; year <= numYears; year++) {
        // V?ng l?p bên trong l?p qua các tháng
        for (int month = 1; month <= 12; month++) {
            double rainfall;

            do {
                cout << "Nh?p lý?ng mýa cho tháng " << month << " nãm " << year << " (không âm): ";
                cin >> rainfall;

                if (rainfall < 0) {
                    cout << "Lý?ng mýa không h?p l?. Vui l?ng nh?p s? không âm." << endl;
                }
            } while (rainfall < 0);

            totalRainfall += rainfall;
            totalMonths++;
        }
    }

    // Tính trung b?nh lý?ng mýa và hi?n th?
    double averageRainfall = totalRainfall / totalMonths;
    cout << "\nT?ng s? tháng: " << totalMonths << endl;
    cout << "T?ng lý?ng mýa: " << totalRainfall << " inches" << endl;
    cout << "Trung b?nh lý?ng mýa hàng tháng: " << averageRainfall << " inches" << endl;

    return 0;
}
