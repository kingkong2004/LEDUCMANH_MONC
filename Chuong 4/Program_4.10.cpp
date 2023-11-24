#include <iostream>
using namespace std;

int main() {
    char employed, recentGrad;

    // Ngý?i dùng có ðý?c vi?c làm và t?t nghi?p g?n ðây không?
    cout << "H?y tr? l?i các câu h?i sau\n";
    cout << "v?i Y n?u là Có ho?c ";
    cout << "N n?u là Không.\n";
    cout << "B?n có vi?c làm không? ";
    cin >> employed;
    cout << "B?n ð? t?t nghi?p ð?i h?c ";
    cout << "trong v?ng hai nãm qua không? ";
    cin >> recentGrad;

    // Xác ð?nh ð? ði?u ki?n vay v?n c?a ngý?i dùng.
    if (employed == 'Y') {
        if (recentGrad == 'Y') { // If l?ng nhau
            cout << "B?n ð? ði?u ki?n cho l?i su?t ";
            cout << "ð?c bi?t.\n";
        }
    }
    return 0;
}
