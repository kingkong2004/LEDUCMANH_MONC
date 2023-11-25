// Chýõng tr?nh này tính s? ð?i bóng ðá mà m?t liên ðoàn tr? em có th? t?o ra t? s? lý?ng c?u th? có s?n.
// Ki?m tra tính h?p l? c?a ð?u vào ðý?c th?c hi?n b?ng v?ng l?p while.
#include <iostream>
using namespace std;

int main()
{
    // H?ng s? cho s? lý?ng t?i thi?u và t?i ða c?a c?u th?
    const int MIN_PLAYERS = 9,
              MAX_PLAYERS = 15;

    // Bi?n
    int players,        // S? lý?ng c?u th? có s?n
        teamPlayers,    // S? lý?ng c?u th? mong mu?n trên m?i ð?i
        numTeams,       // S? ð?i
        leftOver;       // S? lý?ng c?u th? th?ng dý

    // Nh?p s? lý?ng c?u th? mong mu?n trên m?i ð?i.
    cout << "B?n mu?n bao nhiêu c?u th? trên m?i ð?i? ";
    cin >> teamPlayers;

    // Ki?m tra tính h?p l? c?a ð?u vào.
    while (teamPlayers < MIN_PLAYERS || teamPlayers > MAX_PLAYERS)
    {
        // Thông báo l?i.
        cout << "B?n nên có ít nh?t " << MIN_PLAYERS
             << " và không nhi?u hõn " << MAX_PLAYERS << " c?u th? trên m?i ð?i.\n";

        // Nh?p l?i giá tr?.
        cout << "B?n mu?n bao nhiêu c?u th? trên m?i ð?i? ";
        cin >> teamPlayers;
    }

    // Nh?p s? lý?ng c?u th? có s?n.
    cout << "Có bao nhiêu c?u th? có s?n? ";
    cin >> players;

    // Ki?m tra tính h?p l? c?a ð?u vào.
    while (players <= 0)
    {
        // Nh?p l?i giá tr?.
        cout << "Vui l?ng nh?p s? lý?ng c?u th? l?n hõn ho?c b?ng 0: ";
        cin >> players;
    }

    // Tính s? ð?i bóng.
    numTeams = players / teamPlayers;

    // Tính s? lý?ng c?u th? th?ng dý.
    leftOver = players % teamPlayers;

    // Hi?n th? k?t qu?.
    cout << "S? có " << numTeams << " ð?i v?i "
         << leftOver << " c?u th? th?ng dý.\n";

    return 0;
}
