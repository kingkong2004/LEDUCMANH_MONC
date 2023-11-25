// Chýõng tr?nh này l?y s? li?u doanh s? bán hàng hàng ngày trong m?t kho?ng th?i gian và tính t?ng chúng.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int days;             // S? ngày
    double total = 0.0;   // Bi?n tích lu?, kh?i t?o v?i giá tr? 0.0

    // Nh?p s? ngày.
    cout << "Trong bao nhiêu ngày b?n có s? li?u doanh s?? ";
    cin >> days;

    // Nh?p doanh s? bán hàng cho m?i ngày và tích lu? t?ng.
    for (int count = 1; count <= days; count++)
    {
        double sales;
        cout << "Nh?p s? li?u doanh s? cho ngày " << count << ": ";
        cin >> sales;
        total += sales; // Tích lu? t?ng ch?y.
    }

    // Hi?n th? t?ng doanh s?.
    cout << fixed << showpoint << setprecision(2);
    cout << "T?ng doanh s? là $" << total << endl;

    return 0;
}
