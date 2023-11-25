#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int dvdCount = 1; // Ð?m s? lý?ng DVD
    int numDVDs;      // S? lý?ng DVD ðý?c thuê
    double total = 0.0; // T?ng ti?n
    char current;     // Phiên b?n m?i, Y ho?c N

    // Nh?p s? lý?ng DVD.
    cout << "Có bao nhiêu DVD ðang ðý?c thuê? ";
    cin >> numDVDs;

    // Xác ð?nh chi phí.
    do
    {
        if ((dvdCount % 3) == 0)
        {
            cout << "DVD #" << dvdCount << " ðý?c mi?n phí!\n";
            continue; // B?t ð?u ngay v?ng l?p ti?p theo
        }
        cout << "DVD #" << dvdCount;
        cout << " có ph?i là phiên b?n m?i? (Y/N) ";
        cin >> current;
        if (current == 'Y' || current == 'y')
            total += 3.50;
        else
            total += 2.50;
    } while (dvdCount++ < numDVDs);

    // Hi?n th? t?ng ti?n.
    cout << fixed << showpoint << setprecision(2);
    cout << "T?ng ti?n là $" << total << endl;

    return 0;
}
