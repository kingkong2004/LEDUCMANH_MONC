#include <iostream>
#include <vector>
using namespace std;

// Function prototype
void showValues(vector<int>);

int main()
{
    vector<int> values;

    // Ðýa m?t lo?t các s? vào vector.
    for (int count = 0; count < 7; count++)
        values.push_back(count * 2);

    // Hi?n th? các s?.
    showValues(values);
    return 0;
}

//**************************************************
// Ð?nh ngh?a hàm showValues. *
// Hàm này ch?p nh?n m?t vector int làm ð?i s?. *
// Giá tr? c?a m?i ph?n t? trong vector ðý?c hi?n th?. *
//**************************************************

void showValues(vector<int> vect)
{
    for (int count = 0; count < vect.size(); count++)
        cout << vect[count] << endl;
}

