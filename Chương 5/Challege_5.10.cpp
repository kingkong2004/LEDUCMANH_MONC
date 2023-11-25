#include <iostream>
using namespace std;

int main() {
    int numYears;
    double totalRainfall = 0.0;
    int totalMonths = 0;

    // Nh?p s? n�m v?i ki?m tra �?u v�o
    do {
        cout << "Nh?p s? n�m (�t nh?t 1 n�m): ";
        cin >> numYears;

        if (numYears < 1) {
            cout << "S? n�m kh�ng h?p l?. Vui l?ng nh?p s? l?n h�n ho?c b?ng 1." << endl;
        }
    } while (numYears < 1);

    // V?ng l?p ngo�i l?p qua c�c n�m
    for (int year = 1; year <= numYears; year++) {
        // V?ng l?p b�n trong l?p qua c�c th�ng
        for (int month = 1; month <= 12; month++) {
            double rainfall;

            do {
                cout << "Nh?p l�?ng m�a cho th�ng " << month << " n�m " << year << " (kh�ng �m): ";
                cin >> rainfall;

                if (rainfall < 0) {
                    cout << "L�?ng m�a kh�ng h?p l?. Vui l?ng nh?p s? kh�ng �m." << endl;
                }
            } while (rainfall < 0);

            totalRainfall += rainfall;
            totalMonths++;
        }
    }

    // T�nh trung b?nh l�?ng m�a v� hi?n th?
    double averageRainfall = totalRainfall / totalMonths;
    cout << "\nT?ng s? th�ng: " << totalMonths << endl;
    cout << "T?ng l�?ng m�a: " << totalRainfall << " inches" << endl;
    cout << "Trung b?nh l�?ng m�a h�ng th�ng: " << averageRainfall << " inches" << endl;

    return 0;
}
