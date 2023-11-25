// Chýõng tr?nh này hi?n th? m?t menu và yêu c?u ngý?i dùng ch?n. M?t v?ng l?p do-while l?p l?i chýõng tr?nh cho ð?n khi ngý?i dùng ch?n m?c 4 t? menu.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // H?ng s? cho các l?a ch?n trong menu
    const int ADULT_CHOICE = 1,
              CHILD_CHOICE = 2,
              SENIOR_CHOICE = 3,
              QUIT_CHOICE = 4;

    // H?ng s? cho m?c phí thành viên
    const double ADULT = 40.0,
                 CHILD = 20.0,
                 SENIOR = 30.0;

    // Bi?n
    int choice; // L?a ch?n menu
    int months; // S? tháng
    double charges; // Phí hàng tháng

    // Thi?t l?p ð?nh d?ng ð?u ra s? h?c.
    cout << fixed << showpoint << setprecision(2);

    do
    {
        // Hi?n th? menu.
        cout << "\n\t\tMenu Thành viên Câu l?c b? S?c kh?e\n\n"
             << "1. Thành viên ngý?i l?n\n"
             << "2. Thành viên tr? em\n"
             << "3. Thành viên ngý?i cao tu?i\n"
             << "4. Thoát chýõng tr?nh\n\n"
             << "Nh?p l?a ch?n c?a b?n: ";
        cin >> choice;

        // Xác nh?n l?a ch?n menu.
        while (choice < ADULT_CHOICE || choice > QUIT_CHOICE)
        {
            cout << "Vui l?ng nh?p l?a ch?n h?p l? trong menu: ";
            cin >> choice;
        }

        // X? l? l?a ch?n c?a ngý?i dùng.
        if (choice != QUIT_CHOICE)
        {
            // Nh?p s? tháng.
            cout << "Thành viên trong bao nhiêu tháng? ";
            cin >> months;

            // X? l? l?a ch?n c?a ngý?i dùng trong menu.
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

            // Hi?n th? phí hàng tháng.
            cout << "T?ng phí là $"
                 << charges << endl;
        }
    } while (choice != QUIT_CHOICE);

    return 0;
}
