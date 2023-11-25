#include <iostream>
#include <cstring>
using namespace std;

void daoNguocChuoi(char *chuoi) {
    int doDai = strlen(chuoi);
    for (int i = 0; i < doDai / 2; i++) {
        char temp = chuoi[i];
        chuoi[i] = chuoi[doDai - 1 - i];
        chuoi[doDai - 1 - i] = temp;
    }
}

int main() {
    char chuoi[100];

    cout << "Nh?p m?t chu?i: ";
    cin.getline(chuoi, 100);

    daoNguocChuoi(chuoi);

    cout << "Chu?i sau khi ð?o ngý?c: " << chuoi << endl;

    return 0;
}
