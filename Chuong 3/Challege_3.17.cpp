#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(static_cast<unsigned>(time(0));

    // Khai b�o bi?n cho hai s? ng?u nhi�n
    int so1 = rand() % 1000;
    int so2 = rand() % 1000;

    // Hi?n th? b�i to�n c?ng
    cout << "Tinh toan phep cong sau: \n";
    cout << so1 << " + " << so2 << " = ?" << endl;

    // �?i h?c sinh gi?i quy?t b�i to�n
    cout << "Nhan mot phim bat ky de hien thi ket qua...\n";
    cin.get();

    // T�nh to�n v� hi?n th? k?t qu?
    int ket_qua = so1 + so2;
    cout << "Ket qua: " << so1 << " + " << so2 << " = " << ket_qua << endl;

    return 0;
}
