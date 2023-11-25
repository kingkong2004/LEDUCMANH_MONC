// Ch��ng tr?nh n�y t�nh s? �?i b�ng �� m� m?t li�n �o�n tr? em c� th? t?o ra t? s? l�?ng c?u th? c� s?n.
// Ki?m tra t�nh h?p l? c?a �?u v�o ��?c th?c hi?n b?ng v?ng l?p while.
#include <iostream>
using namespace std;

int main()
{
    // H?ng s? cho s? l�?ng t?i thi?u v� t?i �a c?a c?u th?
    const int MIN_PLAYERS = 9,
              MAX_PLAYERS = 15;

    // Bi?n
    int players,        // S? l�?ng c?u th? c� s?n
        teamPlayers,    // S? l�?ng c?u th? mong mu?n tr�n m?i �?i
        numTeams,       // S? �?i
        leftOver;       // S? l�?ng c?u th? th?ng d�

    // Nh?p s? l�?ng c?u th? mong mu?n tr�n m?i �?i.
    cout << "B?n mu?n bao nhi�u c?u th? tr�n m?i �?i? ";
    cin >> teamPlayers;

    // Ki?m tra t�nh h?p l? c?a �?u v�o.
    while (teamPlayers < MIN_PLAYERS || teamPlayers > MAX_PLAYERS)
    {
        // Th�ng b�o l?i.
        cout << "B?n n�n c� �t nh?t " << MIN_PLAYERS
             << " v� kh�ng nhi?u h�n " << MAX_PLAYERS << " c?u th? tr�n m?i �?i.\n";

        // Nh?p l?i gi� tr?.
        cout << "B?n mu?n bao nhi�u c?u th? tr�n m?i �?i? ";
        cin >> teamPlayers;
    }

    // Nh?p s? l�?ng c?u th? c� s?n.
    cout << "C� bao nhi�u c?u th? c� s?n? ";
    cin >> players;

    // Ki?m tra t�nh h?p l? c?a �?u v�o.
    while (players <= 0)
    {
        // Nh?p l?i gi� tr?.
        cout << "Vui l?ng nh?p s? l�?ng c?u th? l?n h�n ho?c b?ng 0: ";
        cin >> players;
    }

    // T�nh s? �?i b�ng.
    numTeams = players / teamPlayers;

    // T�nh s? l�?ng c?u th? th?ng d�.
    leftOver = players % teamPlayers;

    // Hi?n th? k?t qu?.
    cout << "S? c� " << numTeams << " �?i v?i "
         << leftOver << " c?u th? th?ng d�.\n";

    return 0;
}
