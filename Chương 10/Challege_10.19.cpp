#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;

// Hàm ð? ðánh v?n s? ti?n thành chu?i
string spellNumber(double amount) {
    const string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    const string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    const string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    string result;

    int dollars = static_cast<int>(amount);
    int cents = static_cast<int>((amount - dollars) * 100);

    // Ðánh v?n s? ti?n ðô la
    if (dollars > 0) {
        int thousands = dollars / 1000;
        if (thousands > 0) {
            result += ones[thousands] + " Thousand ";
            dollars -= thousands * 1000;
        }

        int hundreds = dollars / 100;
        if (hundreds > 0) {
            result += ones[hundreds] + " Hundred ";
            dollars -= hundreds * 100;
        }

        if (dollars > 0) {
            if (!result.empty()) {
                result += "and ";
            }
            if (dollars >= 10 && dollars < 20) {
                result += teens[dollars - 10];
                dollars = 0;  // Tránh ðánh v?n th?a s? t? 10 ð?n 19
            } else {
                result += tens[dollars / 10] + " ";
                dollars %= 10;
            }

            if (dollars > 0) {
                result += ones[dollars] + " ";
            }
        }
        result += "Dollars ";
    }

    // Ðánh v?n s? ti?n xu
    if (cents > 0) {
        if (!result.empty()) {
            result += "and ";
        }
        result += to_string(cents) + " Cents";
    }

    return result;
}

int main() {
    cout << "Nh?p ngày: ";
    string date;
    getline(cin, date);

    cout << "Nh?p tên ngý?i nh?n thanh toán: ";
    string recipient;
    getline(cin, recipient);

    double amount;
    do {
        cout << "Nh?p s? ti?n (dý?i 10,000 USD): ";
        cin >> amount;

        if (amount <= 0 || amount > 10000) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "S? ti?n không h?p l?. H?y nh?p l?i." << endl;
        }
    } while (amount <= 0 || amount > 10000);

    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Xóa b? nh? ð?m

    // Hi?n th? t?m séc mô ph?ng
    cout << "Ngày: " << date << endl;
    cout << "Tr? theo ðõn ð?t hàng c?a: " << recipient << " $" << fixed << setprecision(2) << amount << endl;
    cout << spellNumber(amount) << endl;

    return 0;
}
