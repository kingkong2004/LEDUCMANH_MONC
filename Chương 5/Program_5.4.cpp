// Chýõng tr?nh này giúp k? thu?t viên ki?m tra nhi?t ð? c?a m?t ch?t.
#include <iostream>
using namespace std;

int main()
{
    const double MAX_TEMP = 102.5; // Nhi?t ð? t?i ða
    double temperature; // Ð? lýu tr? nhi?t ð?

    // Nh?p nhi?t ð? hi?n t?i.
    cout << "Nh?p nhi?t ð? theo ð? Celsius c?a ch?t: ";
    cin >> temperature;

    // Khi c?n thi?t, hý?ng d?n k? thu?t viên
    // ði?u ch?nh b? ði?u nhi?t.
    while (temperature > MAX_TEMP)
    {
        cout << "Nhi?t ð? quá cao. H?y gi?m b? ði?u nhi?t xu?ng và ð?i 5 phút.\n";
        cout << "Sau ðó, h?y ðo nhi?t ð? l?i ? ðõn v? Celsius và nh?p nó vào ðây: ";
        cin >> temperature;
    }

    // Nh?c k? thu?t viên ki?m tra l?i nhi?t ð?
    // sau 15 phút.
    cout << "Nhi?t ð? ch?p nh?n ðý?c.\n";
    cout << "H?y ki?m tra l?i sau 15 phút.\n";

    return 0;
}
