#include <iostream>
#include <cstring>
using namespace std;

int demSoKyTuTrongChuoi(const char *chuoi) {
    int dem = 0;
    while (*chuoi != '\0') {
        dem++;
        chuoi++;
    }
    return dem;
}

int main() {
    char chuoi[100];

    cout << "Nh?p m?t chu?i: ";
    cin.getline(chuoi, 100);

    int soKyTu = demSoKyTuTrongChuoi(chuoi);

    cout << "S? ký t? trong chu?i là: " << soKyTu << endl;

    return 0;
}
