#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    string filename;
    int number;

    // Nh?p tên t?p t? ngý?i dùng.
    cout << "Nh?p tên t?p: ";
    cin >> filename;

    // M? t?p.
    inputFile.open(filename);

    // N?u t?p m? thành công, x? l? nó.
    if (inputFile)
    {
        // Ð?c các s? t? t?p và hi?n th? chúng.
        while (inputFile >> number)
        {
            cout << number << endl;
        }

        // Ðóng t?p.
        inputFile.close();
    }
    else
    {
        // Hi?n th? thông báo l?i.
        cout << "L?i khi m? t?p.\n";
    }

    return 0;
}
