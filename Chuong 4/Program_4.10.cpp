#include <iostream>
using namespace std;

int main() {
    char employed, recentGrad;

    // Ng�?i d�ng c� ��?c vi?c l�m v� t?t nghi?p g?n ��y kh�ng?
    cout << "H?y tr? l?i c�c c�u h?i sau\n";
    cout << "v?i Y n?u l� C� ho?c ";
    cout << "N n?u l� Kh�ng.\n";
    cout << "B?n c� vi?c l�m kh�ng? ";
    cin >> employed;
    cout << "B?n �? t?t nghi?p �?i h?c ";
    cout << "trong v?ng hai n�m qua kh�ng? ";
    cin >> recentGrad;

    // X�c �?nh �? �i?u ki?n vay v?n c?a ng�?i d�ng.
    if (employed == 'Y') {
        if (recentGrad == 'Y') { // If l?ng nhau
            cout << "B?n �? �i?u ki?n cho l?i su?t ";
            cout << "�?c bi?t.\n";
        }
    }
    return 0;
}
