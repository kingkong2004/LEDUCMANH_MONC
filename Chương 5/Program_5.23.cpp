#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    int number;

    // M? t?p.
    inputFile.open("BadListOfNumbers.txt");

    // N?u t?p m? thành công, x? l? t?p.
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
