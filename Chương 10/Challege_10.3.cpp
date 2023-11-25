#include <iostream>
#include <cstring>
using namespace std;

int demSoTu(const char *chuoi) {
    int dem = 0;
    bool dangLaTu = false;

    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (isalpha(chuoi[i])) {
            if (!dangLaTu) {
                dem++;
                dangLaTu = true;
            }
        } else {
            dangLaTu = false;
        }
    }

    return dem;
}

int main() {
    char chuoi[100];

    cout << "Nh?p m?t chu?i: ";
    cin.getline(chuoi, 100);

    int soTu = demSoTu(chuoi);

    cout << "S? t? trong chu?i: " << soTu << endl;

    return 0;
}
