// Ch��ng tr?nh n�y vi?t d? li?u v�o m?t t?p.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile;  // �?i t�?ng outputFile �? ghi d? li?u v�o t?p
    outputFile.open("demofile.txt");  // M? ho?c t?o t?p c� t�n "demofile.txt"

    cout << "B?t �?u ghi d? li?u v�o t?p.\n";

    // Ghi b?n t�n v�o t?p.
    outputFile << "Bach\n";
    outputFile << "Beethoven\n";
    outputFile << "Mozart\n";
    outputFile << "Schubert\n";

    // ��ng t?p
    outputFile.close();  // ��ng t?p sau khi vi?t xong

    cout << "Ho�n th�nh.\n";
    return 0;
}
