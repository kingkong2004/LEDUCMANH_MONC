// Ch��ng tr?nh n�y l?y s? li?u doanh s? b�n h�ng h�ng ng�y trong m?t kho?ng th?i gian v� t�nh t?ng ch�ng.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int days;             // S? ng�y
    double total = 0.0;   // Bi?n t�ch lu?, kh?i t?o v?i gi� tr? 0.0

    // Nh?p s? ng�y.
    cout << "Trong bao nhi�u ng�y b?n c� s? li?u doanh s?? ";
    cin >> days;

    // Nh?p doanh s? b�n h�ng cho m?i ng�y v� t�ch lu? t?ng.
    for (int count = 1; count <= days; count++)
    {
        double sales;
        cout << "Nh?p s? li?u doanh s? cho ng�y " << count << ": ";
        cin >> sales;
        total += sales; // T�ch lu? t?ng ch?y.
    }

    // Hi?n th? t?ng doanh s?.
    cout << fixed << showpoint << setprecision(2);
    cout << "T?ng doanh s? l� $" << total << endl;

    return 0;
}
