// Ch��ng tr?nh n�y hi?n th? m?t menu v� y�u c?u ng�?i d�ng ch?n. M?t v?ng l?p do-while l?p l?i ch��ng tr?nh cho �?n khi ng�?i d�ng ch?n m?c 4 t? menu.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // H?ng s? cho c�c l?a ch?n trong menu
    const int ADULT_CHOICE = 1,
              CHILD_CHOICE = 2,
              SENIOR_CHOICE = 3,
              QUIT_CHOICE = 4;

    // H?ng s? cho m?c ph� th�nh vi�n
    const double ADULT = 40.0,
                 CHILD = 20.0,
                 SENIOR = 30.0;

    // Bi?n
    int choice; // L?a ch?n menu
    int months; // S? th�ng
    double charges; // Ph� h�ng th�ng

    // Thi?t l?p �?nh d?ng �?u ra s? h?c.
    cout << fixed << showpoint << setprecision(2);

    do
    {
        // Hi?n th? menu.
        cout << "\n\t\tMenu Th�nh vi�n C�u l?c b? S?c kh?e\n\n"
             << "1. Th�nh vi�n ng�?i l?n\n"
             << "2. Th�nh vi�n tr? em\n"
             << "3. Th�nh vi�n ng�?i cao tu?i\n"
             << "4. Tho�t ch��ng tr?nh\n\n"
             << "Nh?p l?a ch?n c?a b?n: ";
        cin >> choice;

        // X�c nh?n l?a ch?n menu.
        while (choice < ADULT_CHOICE || choice > QUIT_CHOICE)
        {
            cout << "Vui l?ng nh?p l?a ch?n h?p l? trong menu: ";
            cin >> choice;
        }

        // X? l? l?a ch?n c?a ng�?i d�ng.
        if (choice != QUIT_CHOICE)
        {
            // Nh?p s? th�ng.
            cout << "Th�nh vi�n trong bao nhi�u th�ng? ";
            cin >> months;

            // X? l? l?a ch?n c?a ng�?i d�ng trong menu.
            switch (choice)
            {
            case ADULT_CHOICE:
                charges = months * ADULT;
                break;
            case CHILD_CHOICE:
                charges = months * CHILD;
                break;
            case SENIOR_CHOICE:
                charges = months * SENIOR;
                break;
            }

            // Hi?n th? ph� h�ng th�ng.
            cout << "T?ng ph� l� $"
                 << charges << endl;
        }
    } while (choice != QUIT_CHOICE);

    return 0;
}
