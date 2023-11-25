#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

// H�m �?m s? nguy�n �m trong chu?i
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

// H�m �?m s? ph? �m trong chu?i
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
        cout << "A) �?m s? nguy�n �m trong chu?i\n";
        cout << "B) �?m s? ph? �m trong chu?i\n";
        cout << "C) �?m c? nguy�n �m v� ph? �m trong chu?i\n";
        cout << "D) Nh?p chu?i kh�c\n";
        cout << "E) Tho�t ch��ng tr?nh\n";
        cout << "Ch?n: ";
        cin >> luaChon;
        cin.ignore(); // Xo� k? t? xu?ng d?ng

        switch (luaChon) {
            case 'A':
            case 'a':
                cout << "S? nguy�n �m: " << demNguyenAm(chuoi) << endl;
                break;
            case 'B':
            case 'b':
                cout << "S? ph? �m: " << demPhuAm(chuoi) << endl;
                break;
            case 'C':
            case 'c':
                cout << "S? nguy�n �m: " << demNguyenAm(chuoi) << endl;
                cout << "S? ph? �m: " << demPhuAm(chuoi) << endl;
                break;
            case 'D':
            case 'd':
                break;
            case 'E':
            case 'e':
                cout << "Tho�t ch��ng tr?nh." << endl;
                break;
            default:
                cout << "L?a ch?n kh�ng h?p l?. Vui l?ng th? l?i." << endl;
                break;
        }
    } while (luaChon != 'E' && luaChon != 'e');

    return 0 ;
}

