#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double value;
    char choice;

    cout << "Nh?p m?t s?: ";
    cin >> value;
    cout << "Ch��ng tr?nh n�y s? t�nh " << value;
    cout << " l?y th?a t? 0 �?n 10.\n";

    for (int count = 0; count <= 10; count++)
    {
        cout << value << " l?y th?a " << count << " l� " << pow(value, count);
        cout << "\nNh?p Q �? tho�t ho?c b?t k? ph�m n�o kh�c ";
        cout << "�? ti?p t?c. ";
        cin >> choice;
        if (choice == 'Q' || choice == 'q')
            break;
    }

    return 0;
}
