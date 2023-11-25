#include <iostream>
#include <string>
#include <cctype> // �? s? d?ng isupper

using namespace std;

string convertToProperSentence(const string& input) {
    string result = "";

    for (int i = 0; i < input.length(); i++) {
        char currentChar = input[i];

        // N?u k? t? hi?n t?i l� ch? hoa v� kh�ng ph?i t? �?u ti�n, th�m d?u c�ch tr�?c n�
        if (isupper(currentChar) && i > 0) {
            result += ' ';
        }

        result += currentChar;
    }

    return result;
}

int main() {
    string input;
    cout << "Nh?p c�u v?i c�c t? ��?c vi?t hoa: ";
    getline(cin, input);

    string convertedSentence = convertToProperSentence(input);

    cout << "K?t qu?: " << convertedSentence << endl;

    return 0;
}
