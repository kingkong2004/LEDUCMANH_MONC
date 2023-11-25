#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double value;
    char choice;

    cout << "Nh?p m?t s?: ";
    cin >> value;
    cout << "Chýõng tr?nh này s? tính " << value;
    cout << " l?y th?a t? 0 ð?n 10.\n";

    for (int count = 0; count <= 10; count++)
    {
        cout << value << " l?y th?a " << count << " là " << pow(value, count);
        cout << "\nNh?p Q ð? thoát ho?c b?t k? phím nào khác ";
        cout << "ð? ti?p t?c. ";
        cin >> choice;
        if (choice == 'Q' || choice == 'q')
            break;
    }

    return 0;
}
