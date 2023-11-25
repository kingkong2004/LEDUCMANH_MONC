// This program calculates the total number of points a soccer team has earned over a series of games.
// The user enters a series of point values, then -1 when finished.
#include <iostream>
using namespace std;

int main()
{
    int game = 1;   // Bi?n ð?m s? tr?n ð?u
    int points;     // Lýu tr? s? ði?m
    int total = 0;  // Bi?n tích l?y t?ng s? ði?m

    cout << "Nh?p s? ði?m mà ð?i bóng c?a b?n ð? ki?m ðý?c\n";
    cout << "trong mùa gi?i, sau ðó nh?p -1 khi hoàn thành.\n\n";
    cout << "Nh?p s? ði?m cho tr?n ð?u th? " << game << ": ";
    cin >> points;

    while (points != -1)
    {
        total += points;  // Tích l?y t?ng s? ði?m
        game++;
        cout << "Nh?p s? ði?m cho tr?n ð?u th? " << game << ": ";
        cin >> points;
    }

    cout << "\nT?ng s? ði?m là " << total << endl;
    return 0;
}
