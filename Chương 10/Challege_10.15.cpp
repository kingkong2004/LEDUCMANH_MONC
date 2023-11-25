#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
int main() {
    ifstream inputFile("text.txt");  // M? t?p tin text.txt
    if (!inputFile) {
        std::cerr << "Không th? m? t?p tin.\n";
        return 1;
    }

    char ch;
    int uppercaseCount = 0;
    int lowercaseCount = 0;
    int digitCount = 0;

    while (inputFile.get(ch)) {
        if (isupper(ch)) {
            uppercaseCount++;
        } else if (islower(ch)) {
            lowercaseCount++;
        } else if (isdigit(ch)) {
            digitCount++;
        }
    }

    cout << "S? ch? in hoa trong t?p tin: " << uppercaseCount << endl;
    cout << "S? ch? thý?ng trong t?p tin: " << lowercaseCount << endl;
    cout << "S? ch? s? trong t?p tin: " << digitCount << endl;

    inputFile.close();  // Ðóng t?p tin

    return 0;
}
