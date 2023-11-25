#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

void vietHoaKyTuDauCau(const char *chuoi) {
    bool vietHoa = true; // Bi?n theo d?i vi?t hoa k? t?
    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i] == '.' || chuoi[i] == '!' || chuoi[i] == '?') {
            vietHoa = true; // G?p d?u câu, c?n vi?t hoa k? t? ti?p theo
        } else if (vietHoa && isalpha(chuoi[i])) {
            cout << (char)toupper(chuoi[i]); // Vi?t hoa k? t? ð?u c?a t?
            vietHoa = false;
        } else {
            cout << chuoi[i];
        }
    }
}

int main() {
    char chuoi[1000];

    cout << "Nh?p m?t chu?i: ";
    cin.getline(chuoi, 1000);

    vietHoaKyTuDauCau(chuoi);

    return 0;
}
