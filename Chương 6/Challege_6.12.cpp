#include <iostream>
using namespace std;

// H�m t�nh gi� b�n l?
double TinhGiaBanLe(double giaBanBuon, double tyLeTangGia)
{
    if (giaBanBuon < 0 || tyLeTangGia < 0) {
        cout << "Gia� tri� nh��p va�o kh�ng ��?c �m." << endl;
        return -1.0; // Tr? v? gi� tr? �m �? ch? l?i.
    }

    // T�nh to�n gi� b�n l?
    return giaBanBuon + (giaBanBuon * tyLeTangGia / 100.0);
}

int main()
{
    double giaBanBuon, tyLeTangGia;

    // Nh?p gi� tr? t? ng�?i d�ng
    cout << "Nh?p gi� b�n bu�n c?a s?n ph?m: ";
    cin >> giaBanBuon;
    cout << "Nh?p t? l? t�ng gi� (vi du: 100% la� 100): ";
    cin >> tyLeTangGia;

    // T�nh to�n gi� b�n l?
    double giaBanLe = TinhGiaBanLe(giaBanBuon, tyLeTangGia);

    if (giaBanLe >= 0) {
        // Hi?n th? gi� b�n l?
        cout << "Gia� ba�n le� cu�a sa�n ph��m la�: " << giaBanLe << " ���ng" << endl;
    } else {
        cout << "L��i: Gia� tri� nh��p va�o kh�ng h��p l��." << endl;
    }

    return 0;
}
