#include <iostream>
#include <string>
#include <cctype> // Ð? s? d?ng isupper

using namespace std;

string convertToProperSentence(const string& input) {
    string result = "";

    for (int i = 0; i < input.length(); i++) {
        char currentChar = input[i];

        // N?u k? t? hi?n t?i là ch? hoa và không ph?i t? ð?u tiên, thêm d?u cách trý?c nó
        if (isupper(currentChar) && i > 0) {
            result += ' ';
        }

        result += currentChar;
    }

    return result;
}

int main() {
    string input;
    cout << "Nh?p câu v?i các t? ðý?c vi?t hoa: ";
    getline(cin, input);

    string convertedSentence = convertToProperSentence(input);

    cout << "K?t qu?: " << convertedSentence << endl;

    return 0;
}
