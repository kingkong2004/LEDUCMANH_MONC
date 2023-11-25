// Ch��ng tr?nh n�y gi�p k? thu?t vi�n ki?m tra nhi?t �? c?a m?t ch?t.
#include <iostream>
using namespace std;

int main()
{
    const double MAX_TEMP = 102.5; // Nhi?t �? t?i �a
    double temperature; // �? l�u tr? nhi?t �?

    // Nh?p nhi?t �? hi?n t?i.
    cout << "Nh?p nhi?t �? theo �? Celsius c?a ch?t: ";
    cin >> temperature;

    // Khi c?n thi?t, h�?ng d?n k? thu?t vi�n
    // �i?u ch?nh b? �i?u nhi?t.
    while (temperature > MAX_TEMP)
    {
        cout << "Nhi?t �? qu� cao. H?y gi?m b? �i?u nhi?t xu?ng v� �?i 5 ph�t.\n";
        cout << "Sau ��, h?y �o nhi?t �? l?i ? ��n v? Celsius v� nh?p n� v�o ��y: ";
        cin >> temperature;
    }

    // Nh?c k? thu?t vi�n ki?m tra l?i nhi?t �?
    // sau 15 ph�t.
    cout << "Nhi?t �? ch?p nh?n ��?c.\n";
    cout << "H?y ki?m tra l?i sau 15 ph�t.\n";

    return 0;
}
