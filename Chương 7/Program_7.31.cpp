#include <iostream>
#include <vector>
using namespace std;

// Function prototype
double avgVector(vector<int>);

int main()
{
    vector<int> values; // M?t vector �? l�u tr? gi� tr?
    int numValues; // S? l�?ng gi� tr?
    double average; // �? l�u gi� tr? trung b?nh

    // Nh?p s? l�?ng gi� tr? c?n t�nh trung b?nh.
    cout << "B?n mu?n t�nh trung b?nh bao nhi�u gi� tr?? ";
    cin >> numValues;

    // Nh?p c�c gi� tr? v� l�u tr? ch�ng trong vector.
    for (int count = 0; count < numValues; count++)
    {
        int tempValue;
        cout << "Nh?p m?t gi� tr?: ";
        cin >> tempValue;
        values.push_back(tempValue);
    }

    // T�nh gi� tr? trung b?nh c?a c�c gi� tr? v� hi?n th? n�.
    average = avgVector(values);
    cout << "Gi� tr? trung b?nh: " << average << endl;

    return 0;
}

//*************************************************************
// �?nh ngh?a h�m avgVector. *
// H�m n�y ch?p nh?n m?t vector int l�m �?i s?. N?u *
// vector ch?a gi� tr?, h�m s? tr? v? gi� tr? trung b?nh c?a *
// nh?ng gi� tr? ��. Ng�?c l?i, m?t th�ng b�o l?i s? ��?c hi?n th? *
// v� h�m s? tr? v? 0.0. *
//*************************************************************

double avgVector(vector<int> vect)
{
    int total = 0; // bi?n t�ch l?y
    double avg; // gi� tr? trung b?nh

    if (vect.empty()) // X�c �?nh xem vector c� r?ng kh�ng
    {
        cout << "Kh�ng c� gi� tr? �? t�nh trung b?nh.\n";
        avg = 0.0;
    }
    else
    {
        for (int count = 0; count < vect.size(); count++)
            total += vect[count];
        avg = static_cast<double>(total) / vect.size();
    }

    return avg;
}
