// Ch��ng tr?nh n�y minh h?a vi?c s? d?ng c�c to�n t? ++ v� --.
#include <iostream>
using namespace std;

int main()
{
    int num = 4; // num b?t �?u v?i gi� tr? l� 4.

    // Hi?n th? gi� tr? trong bi?n num.
    cout << "Bi?n num l� " << num << endl;
    cout << "B�y gi? t�i s? t�ng gi� tr? c?a num.\n\n";

    // S? d?ng to�n t? t�ng sau ++ �? t�ng gi� tr? c?a num.
    num++;
    cout << "B�y gi? bi?n num l� " << num << endl;
    cout << "T�i s? t�ng gi� tr? c?a num l?n n?a.\n\n";

    // S? d?ng to�n t? t�ng tr�?c ++ �? t�ng gi� tr? c?a num.
    ++num;
    cout << "B�y gi? bi?n num l� " << num << endl;
    cout << "B�y gi? t�i s? gi?m gi� tr? c?a num.\n\n";

    // S? d?ng to�n t? gi?m sau -- �? gi?m gi� tr? c?a num.
    num--;
    cout << "B�y gi? bi?n num l� " << num << endl;
    cout << "T�i s? gi?m gi� tr? c?a num l?n n?a.\n\n";

    // S? d?ng to�n t? gi?m tr�?c -- �? gi?m gi� tr? c?a num.
    --num;
    cout << "B�y gi? bi?n num l� " << num << endl;
    return 0;
}
