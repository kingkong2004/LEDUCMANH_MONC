#include <iostream>
using namespace std;

int main() {
    double annualInterestRate, startingBalance;
    int numMonths;

    // Nh?n c�c gi� tr? �?u v�o
    cout << "Nh?p t? l? l?i su?t h�ng n�m (d�?i d?ng s? th?p ph�n): ";
    cin >> annualInterestRate;
    cout << "Nh?p s? d� ban �?u: ";
    cin >> startingBalance;
    cout << "Nh?p s? th�ng: ";
    cin >> numMonths;

    double balance = startingBalance;
    double totalDeposits = 0.0;
    double totalWithdrawals = 0.0;
    double totalInterest = 0.0;

    for (int month = 1; month <= numMonths; month++) {
        // Y�u c?u s? ti?n g?i trong th�ng
        double deposit;
        cout << "Nh?p s? ti?n g?i trong th�ng " << month << ": ";
        cin >> deposit;

        // Ki?m tra v� th�m s? ti?n g?i v�o s? d�
        if (deposit < 0) {
            cout << "D? li?u kh�ng h?p l?. Vui l?ng nh?p s? ti?n g?i kh�ng �m." << endl;
            break;
        }
        balance += deposit;
        totalDeposits += deposit;

        // Y�u c?u s? ti?n r�t trong th�ng
        double withdrawal;
        cout << "Nh?p s? ti?n r�t trong th�ng " << month << ": ";
        cin >> withdrawal;

        // Ki?m tra v� tr? s? ti?n r�t kh?i s? d�
        if (withdrawal < 0) {
            cout << "D? li?u kh�ng h?p l?. Vui l?ng nh?p s? ti?n r�t kh�ng �m." << endl;
            break;
        }
        balance -= withdrawal;
        totalWithdrawals += withdrawal;

        // T�nh l?i h�ng th�ng
        double monthlyInterest = (annualInterestRate / 12.0) * balance;
        balance += monthlyInterest;
        totalInterest += monthlyInterest;

        // Ki?m tra s? d� �m
        if (balance < 0) {
            cout << "T�i kho?n �? b? ��ng do s? d� �m." << endl;
            break;
        }
    }

    // Hi?n th? k?t qu? cu?i c�ng
    cout << "S? d� cu?i c�ng: " << balance << endl;
    cout << "T?ng s? ti?n g?i: " << totalDeposits << endl;
    cout << "T?ng s? ti?n r�t: " << totalWithdrawals << endl;
    cout << "T?ng l?i thu ��?c: " << totalInterest << endl;

    return 0;
}
