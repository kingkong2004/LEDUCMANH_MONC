#include <iostream>
#include <vector>
using namespace std;

// Function prototype
void showValues(vector<int>);

int main()
{
    vector<int> values;

    // ��a m?t lo?t c�c s? v�o vector.
    for (int count = 0; count < 7; count++)
        values.push_back(count * 2);

    // Hi?n th? c�c s?.
    showValues(values);
    return 0;
}

//**************************************************
// �?nh ngh?a h�m showValues. *
// H�m n�y ch?p nh?n m?t vector int l�m �?i s?. *
// Gi� tr? c?a m?i ph?n t? trong vector ��?c hi?n th?. *
//**************************************************

void showValues(vector<int> vect)
{
    for (int count = 0; count < vect.size(); count++)
        cout << vect[count] << endl;
}

