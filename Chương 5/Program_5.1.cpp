// Chýõng tr?nh này minh h?a vi?c s? d?ng các toán t? ++ và --.
#include <iostream>
using namespace std;

int main()
{
    int num = 4; // num b?t ð?u v?i giá tr? là 4.

    // Hi?n th? giá tr? trong bi?n num.
    cout << "Bi?n num là " << num << endl;
    cout << "Bây gi? tôi s? tãng giá tr? c?a num.\n\n";

    // S? d?ng toán t? tãng sau ++ ð? tãng giá tr? c?a num.
    num++;
    cout << "Bây gi? bi?n num là " << num << endl;
    cout << "Tôi s? tãng giá tr? c?a num l?n n?a.\n\n";

    // S? d?ng toán t? tãng trý?c ++ ð? tãng giá tr? c?a num.
    ++num;
    cout << "Bây gi? bi?n num là " << num << endl;
    cout << "Bây gi? tôi s? gi?m giá tr? c?a num.\n\n";

    // S? d?ng toán t? gi?m sau -- ð? gi?m giá tr? c?a num.
    num--;
    cout << "Bây gi? bi?n num là " << num << endl;
    cout << "Tôi s? gi?m giá tr? c?a num l?n n?a.\n\n";

    // S? d?ng toán t? gi?m trý?c -- ð? gi?m giá tr? c?a num.
    --num;
    cout << "Bây gi? bi?n num là " << num << endl;
    return 0;
}
