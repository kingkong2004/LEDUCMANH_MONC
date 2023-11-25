#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

char mostFrequentCharacter(const string &str) {
    unordered_map<char, int> charCount;

    for (char c : str) {
        if (isalpha(c)) {
            charCount[c]++;
        }
    }

    char mostFrequentChar = ' ';
    int maxCount = 0;

    for (const auto &entry : charCount) {
        if (entry.second > maxCount) {
            maxCount = entry.second;
            mostFrequentChar = entry.first;
        }
    }

    return mostFrequentChar;
}

int main() {
    string input;
    cout << "Nh?p chu?i: ";
    getline(cin, input);

    char mostFrequent = mostFrequentCharacter(input);

    if (mostFrequent != ' ') {
        cout << "K? t? xu?t hi?n thý?ng xuyên nh?t trong chu?i: " << mostFrequent << endl;
    } else {
        cout << "Không có k? t? h?p l? nào trong chu?i." << endl;
    }

    return 0;
}
