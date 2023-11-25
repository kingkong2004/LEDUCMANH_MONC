// Chýõng tr?nh này vi?t d? li?u vào m?t t?p.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile;  // Ð?i tý?ng outputFile ð? ghi d? li?u vào t?p
    outputFile.open("demofile.txt");  // M? ho?c t?o t?p có tên "demofile.txt"

    cout << "B?t ð?u ghi d? li?u vào t?p.\n";

    // Ghi b?n tên vào t?p.
    outputFile << "Bach\n";
    outputFile << "Beethoven\n";
    outputFile << "Mozart\n";
    outputFile << "Schubert\n";

    // Ðóng t?p
    outputFile.close();  // Ðóng t?p sau khi vi?t xong

    cout << "Hoàn thành.\n";
    return 0;
}
