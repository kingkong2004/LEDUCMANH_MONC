#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("LineUp.txt"); // M? t?p

    if (!inputFile.is_open()) {
        cerr << "L?i: Kh�ng th? m? t?p 'LineUp.txt'" << endl;
        return 1;
    }

    vector<string> sinhVien;
    string ten;

    // �?c t�n t? t?p cho �?n khi kh�ng c?n d? li?u
    while (getline(inputFile, ten)) {
        sinhVien.push_back(ten);
    }

    inputFile.close(); // ��ng t?p

    // Hi?n th? danh s�ch sinh vi�n theo th? t? ng�?c
    cout << "Danh s�ch sinh vi�n theo th? t? ng�?c:" << endl;
    for (int i = sinhVien.size() - 1; i >= 0; i--) {
        cout << sinhVien[i] << endl;
    }

    return 0;
}
