#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int dvdCount = 1; // �?m s? l�?ng DVD
    int numDVDs;      // S? l�?ng DVD ��?c thu�
    double total = 0.0; // T?ng ti?n
    char current;     // Phi�n b?n m?i, Y ho?c N

    // Nh?p s? l�?ng DVD.
    cout << "C� bao nhi�u DVD �ang ��?c thu�? ";
    cin >> numDVDs;

    // X�c �?nh chi ph�.
    do
    {
        if ((dvdCount % 3) == 0)
        {
            cout << "DVD #" << dvdCount << " ��?c mi?n ph�!\n";
            continue; // B?t �?u ngay v?ng l?p ti?p theo
        }
        cout << "DVD #" << dvdCount;
        cout << " c� ph?i l� phi�n b?n m?i? (Y/N) ";
        cin >> current;
        if (current == 'Y' || current == 'y')
            total += 3.50;
        else
            total += 2.50;
    } while (dvdCount++ < numDVDs);

    // Hi?n th? t?ng ti?n.
    cout << fixed << showpoint << setprecision(2);
    cout << "T?ng ti?n l� $" << total << endl;

    return 0;
}
