#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream outputFile;
    string name1, name2, name3;

    // M? t?p ð?u ra.
    outputFile.open("Friends.txt");

    // L?y tên c?a ba ngý?i b?n.
    cout << "Nh?p tên c?a ba ngý?i b?n.\n";
    cout << "B?n th? nh?t: ";
    cin.ignore(); // Ð? xóa b? ð?m và ch?p nh?n d?u cách trong tên n?u có
    getline(cin, name1);
    cout << "B?n th? hai: ";
    getline(cin, name2);
    cout << "B?n th? ba: ";
    getline(cin, name3);

    // Ghi các tên vào t?p.
    outputFile << name1 << endl;
    outputFile << name2 << endl;
    outputFile << name3 << endl;
    cout << "Các tên ð? ðý?c lýu vào t?p.\n";

    // Ðóng t?p
    outputFile.close();
    return 0;
}
