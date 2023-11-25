#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char ho[30];
    char tenDem[30];
    char ten[30];
    char hoTenSapXep[100];

    cout << "Nh?p h? c?a b?n: ";
    cin.getline(ho, sizeof(ho));

    cout << "Nh?p tên ð?m c?a b?n: ";
    cin.getline(tenDem, sizeof(tenDem));

    cout << "Nh?p tên c?a b?n: ";
    cin.getline(ten, sizeof(ten));

    strcpy(hoTenSapXep, ho);
    strcat(hoTenSapXep, ", ");
    strcat(hoTenSapXep, ten);
    strcat(hoTenSapXep, " ");
    strcat(hoTenSapXep, tenDem);

    cout << "H? và tên ð? ðý?c s?p x?p: " << hoTenSapXep << endl;

    return 0;
}
