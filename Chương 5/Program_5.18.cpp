#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream outputFile;
    string name1, name2, name3;

    // M? t?p �?u ra.
    outputFile.open("Friends.txt");

    // L?y t�n c?a ba ng�?i b?n.
    cout << "Nh?p t�n c?a ba ng�?i b?n.\n";
    cout << "B?n th? nh?t: ";
    cin.ignore(); // �? x�a b? �?m v� ch?p nh?n d?u c�ch trong t�n n?u c�
    getline(cin, name1);
    cout << "B?n th? hai: ";
    getline(cin, name2);
    cout << "B?n th? ba: ";
    getline(cin, name3);

    // Ghi c�c t�n v�o t?p.
    outputFile << name1 << endl;
    outputFile << name2 << endl;
    outputFile << name3 << endl;
    cout << "C�c t�n �? ��?c l�u v�o t?p.\n";

    // ��ng t?p
    outputFile.close();
    return 0;
}
