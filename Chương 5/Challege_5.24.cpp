#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("LineUp.txt"); // M? t?p

    if (!inputFile.is_open()) {
        cerr << "L?i: Không th? m? t?p 'LineUp.txt'" << endl;
        return 1;
    }

    vector<string> sinhVien;
    string ten;

    // Ð?c tên t? t?p cho ð?n khi không c?n d? li?u
    while (getline(inputFile, ten)) {
        sinhVien.push_back(ten);
    }

    inputFile.close(); // Ðóng t?p

    // Hi?n th? danh sách sinh viên theo th? t? ngý?c
    cout << "Danh sách sinh viên theo th? t? ngý?c:" << endl;
    for (int i = sinhVien.size() - 1; i >= 0; i--) {
        cout << sinhVien[i] << endl;
    }

    return 0;
}
