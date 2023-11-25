// Chýõng tr?nh này tính trung b?nh c?a 3 ði?m thi và l?p l?i nhi?u l?n theo mong mu?n c?a ngý?i dùng.
#include <iostream>
using namespace std;

int main()
{
    int score1, score2, score3; // Ba ði?m thi
    double average; // Ði?m trung b?nh
    char again; // Ð? ch?a k? t? Y ho?c N

    do
    {
        // Nh?p ba ði?m thi.
        cout << "Nh?p 3 ði?m và tôi s? tính ði?m trung b?nh c?a chúng: ";
        cin >> score1 >> score2 >> score3;

        // Tính toán và hi?n th? ði?m trung b?nh.
        average = (score1 + score2 + score3) / 3.0;
        cout << "Ði?m trung b?nh là " << average << ".\n";

        // Ngý?i dùng có mu?n tính ði?m trung b?nh cho b? ði?m khác không?
        cout << "B?n có mu?n tính ði?m trung b?nh cho b? ði?m khác không? (Y/N) ";
        cin >> again;
    } while (again == 'Y' || again == 'y');

    return 0;
}
