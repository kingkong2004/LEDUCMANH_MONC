#include <iostream>
#include <fstream> // ifstream
#include <string>

using namespace std;

int main() 
{
    ifstream input_file;
    string years;

    cout << "Su tang truong dan so cua thi tran"<<endl;
	cout<<"dau * tuong trung cho 1000 nguoi"<<endl; 

    input_file.open("People.txt");

    if (!input_file.is_open()) {
        cerr << "Không the mo tep tin People.txt. Kiem tra xem tep tin có ton tai không." << endl;
        return 1; // 
    }

    while (getline(input_file, years))
        cout << years << endl;

    input_file.close();

    return 0;
}

