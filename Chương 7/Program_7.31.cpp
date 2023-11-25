#include <iostream>
#include <vector>
using namespace std;

// Function prototype
double avgVector(vector<int>);

int main()
{
    vector<int> values; // M?t vector ð? lýu tr? giá tr?
    int numValues; // S? lý?ng giá tr?
    double average; // Ð? lýu giá tr? trung b?nh

    // Nh?p s? lý?ng giá tr? c?n tính trung b?nh.
    cout << "B?n mu?n tính trung b?nh bao nhiêu giá tr?? ";
    cin >> numValues;

    // Nh?p các giá tr? và lýu tr? chúng trong vector.
    for (int count = 0; count < numValues; count++)
    {
        int tempValue;
        cout << "Nh?p m?t giá tr?: ";
        cin >> tempValue;
        values.push_back(tempValue);
    }

    // Tính giá tr? trung b?nh c?a các giá tr? và hi?n th? nó.
    average = avgVector(values);
    cout << "Giá tr? trung b?nh: " << average << endl;

    return 0;
}

//*************************************************************
// Ð?nh ngh?a hàm avgVector. *
// Hàm này ch?p nh?n m?t vector int làm ð?i s?. N?u *
// vector ch?a giá tr?, hàm s? tr? v? giá tr? trung b?nh c?a *
// nh?ng giá tr? ðó. Ngý?c l?i, m?t thông báo l?i s? ðý?c hi?n th? *
// và hàm s? tr? v? 0.0. *
//*************************************************************

double avgVector(vector<int> vect)
{
    int total = 0; // bi?n tích l?y
    double avg; // giá tr? trung b?nh

    if (vect.empty()) // Xác ð?nh xem vector có r?ng không
    {
        cout << "Không có giá tr? ð? tính trung b?nh.\n";
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
