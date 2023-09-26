#include <iostream>
#include <fstream> // ifstream
#include <string>

using namespace std;

int main() 
{
    ifstream input_file;
    string years;
    input_file.open("1.txt");
    if (!input_file.is_open()) {
        cerr << "Khong the mo tep tin " << endl;
        return 1; // 
    }
    while (getline(input_file, years))
        cout << years << endl;
    input_file.close();

    return 0;
}

