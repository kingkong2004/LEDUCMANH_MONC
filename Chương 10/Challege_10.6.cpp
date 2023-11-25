#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

// Hàm ð?m s? nguyên âm trong chu?i
int demNguyenAm(const char *str) {
    int count = 0;
    while (*str) {
        char ch = tolower(*str);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        str++;
    }
    return count;
}

// Hàm ð?m s? ph? âm trong chu?i
int demPhuAm(const char *str) {
    int count = 0;
    while (*str) {
        char ch = tolower(*str);
        if (isalpha(ch) && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char chuoi[100];
    char luaChon;

    do {
        cout << "Nh?p m?t chu?i: ";
        cin.getline(chuoi, sizeof(chuoi));

        cout << "Menu:\n";
        cout << "A) Ð?m s? nguyên âm trong chu?i\n";
        cout << "B) Ð?m s? ph? âm trong chu?i\n";
        cout << "C) Ð?m c? nguyên âm và ph? âm trong chu?i\n";
        cout << "D) Nh?p chu?i khác\n";
        cout << "E) Thoát chýõng tr?nh\n";
        cout << "Ch?n: ";
        cin >> luaChon;
        cin.ignore(); // Xoá k? t? xu?ng d?ng

        switch (luaChon) {
            case 'A':
            case 'a':
                cout << "S? nguyên âm: " << demNguyenAm(chuoi) << endl;
                break;
            case 'B':
            case 'b':
                cout << "S? ph? âm: " << demPhuAm(chuoi) << endl;
                break;
            case 'C':
            case 'c':
                cout << "S? nguyên âm: " << demNguyenAm(chuoi) << endl;
                cout << "S? ph? âm: " << demPhuAm(chuoi) << endl;
                break;
            case 'D':
            case 'd':
                break;
            case 'E':
            case 'e':
                cout << "Thoát chýõng tr?nh." << endl;
                break;
            default:
                cout << "L?a ch?n không h?p l?. Vui l?ng th? l?i." << endl;
                break;
        }
    } while (luaChon != 'E' && luaChon != 'e');

    return 0 ;
}

