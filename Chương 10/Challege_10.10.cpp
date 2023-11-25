#include <iostream>
#include <string>
using namespace std;

string thayTheSubstring(const string &string1, const string &string2, const string &string3) {
    string result = string1;
    size_t found = result.find(string2);

    while (found != string::npos) {
        result.replace(found, string2.length(), string3);
        found = result.find(string2, found + string3.length());
    }

    return result;
}

int main() {
    string string1 = "con ch� nh?y qua h�ng r�o";
    string string2 = "c�i";
    string string3 = "c�i d�";

    string result = thayTheSubstring(string1, string2, string3);

    cout << "K?t qu?: " << result << endl;

    return 0;
}
