#include <iostream>
using namespace std;

int main() {
    double annualInterestRate, startingBalance;
    int numMonths;

    // Nh?n các giá tr? ð?u vào
    cout << "Nh?p t? l? l?i su?t hàng nãm (dý?i d?ng s? th?p phân): ";
    cin >> annualInterestRate;
    cout << "Nh?p s? dý ban ð?u: ";
    cin >> startingBalance;
    cout << "Nh?p s? tháng: ";
    cin >> numMonths;

    double balance = startingBalance;
    double totalDeposits = 0.0;
    double totalWithdrawals = 0.0;
    double totalInterest = 0.0;

    for (int month = 1; month <= numMonths; month++) {
        // Yêu c?u s? ti?n g?i trong tháng
        double deposit;
        cout << "Nh?p s? ti?n g?i trong tháng " << month << ": ";
        cin >> deposit;

        // Ki?m tra và thêm s? ti?n g?i vào s? dý
        if (deposit < 0) {
            cout << "D? li?u không h?p l?. Vui l?ng nh?p s? ti?n g?i không âm." << endl;
            break;
        }
        balance += deposit;
        totalDeposits += deposit;

        // Yêu c?u s? ti?n rút trong tháng
        double withdrawal;
        cout << "Nh?p s? ti?n rút trong tháng " << month << ": ";
        cin >> withdrawal;

        // Ki?m tra và tr? s? ti?n rút kh?i s? dý
        if (withdrawal < 0) {
            cout << "D? li?u không h?p l?. Vui l?ng nh?p s? ti?n rút không âm." << endl;
            break;
        }
        balance -= withdrawal;
        totalWithdrawals += withdrawal;

        // Tính l?i hàng tháng
        double monthlyInterest = (annualInterestRate / 12.0) * balance;
        balance += monthlyInterest;
        totalInterest += monthlyInterest;

        // Ki?m tra s? dý âm
        if (balance < 0) {
            cout << "Tài kho?n ð? b? ðóng do s? dý âm." << endl;
            break;
        }
    }

    // Hi?n th? k?t qu? cu?i cùng
    cout << "S? dý cu?i cùng: " << balance << endl;
    cout << "T?ng s? ti?n g?i: " << totalDeposits << endl;
    cout << "T?ng s? ti?n rút: " << totalWithdrawals << endl;
    cout << "T?ng l?i thu ðý?c: " << totalInterest << endl;

    return 0;
}
