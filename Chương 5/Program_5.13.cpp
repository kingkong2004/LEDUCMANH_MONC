// This program calculates the total number of points a soccer team has earned over a series of games.
// The user enters a series of point values, then -1 when finished.
#include <iostream>
using namespace std;

int main()
{
    int game = 1;   // Bi?n �?m s? tr?n �?u
    int points;     // L�u tr? s? �i?m
    int total = 0;  // Bi?n t�ch l?y t?ng s? �i?m

    cout << "Nh?p s? �i?m m� �?i b�ng c?a b?n �? ki?m ��?c\n";
    cout << "trong m�a gi?i, sau �� nh?p -1 khi ho�n th�nh.\n\n";
    cout << "Nh?p s? �i?m cho tr?n �?u th? " << game << ": ";
    cin >> points;

    while (points != -1)
    {
        total += points;  // T�ch l?y t?ng s? �i?m
        game++;
        cout << "Nh?p s? �i?m cho tr?n �?u th? " << game << ": ";
        cin >> points;
    }

    cout << "\nT?ng s? �i?m l� " << total << endl;
    return 0;
}
