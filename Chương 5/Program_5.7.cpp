// Ch��ng tr?nh n�y t�nh trung b?nh c?a 3 �i?m thi v� l?p l?i nhi?u l?n theo mong mu?n c?a ng�?i d�ng.
#include <iostream>
using namespace std;

int main()
{
    int score1, score2, score3; // Ba �i?m thi
    double average; // �i?m trung b?nh
    char again; // �? ch?a k? t? Y ho?c N

    do
    {
        // Nh?p ba �i?m thi.
        cout << "Nh?p 3 �i?m v� t�i s? t�nh �i?m trung b?nh c?a ch�ng: ";
        cin >> score1 >> score2 >> score3;

        // T�nh to�n v� hi?n th? �i?m trung b?nh.
        average = (score1 + score2 + score3) / 3.0;
        cout << "�i?m trung b?nh l� " << average << ".\n";

        // Ng�?i d�ng c� mu?n t�nh �i?m trung b?nh cho b? �i?m kh�c kh�ng?
        cout << "B?n c� mu?n t�nh �i?m trung b?nh cho b? �i?m kh�c kh�ng? (Y/N) ";
        cin >> again;
    } while (again == 'Y' || again == 'y');

    return 0;
}
