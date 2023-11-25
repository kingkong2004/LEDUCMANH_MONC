#include <iostream>
using namespace std;

// Hàm tính giá bán l?
double TinhGiaBanLe(double giaBanBuon, double tyLeTangGia)
{
    if (giaBanBuon < 0 || tyLeTangGia < 0) {
        cout << "Giaì triò nhâòp vaÌo không ðý?c âm." << endl;
        return -1.0; // Tr? v? giá tr? âm ð? ch? l?i.
    }

    // Tính toán giá bán l?
    return giaBanBuon + (giaBanBuon * tyLeTangGia / 100.0);
}

int main()
{
    double giaBanBuon, tyLeTangGia;

    // Nh?p giá tr? t? ngý?i dùng
    cout << "Nh?p giá bán buôn c?a s?n ph?m: ";
    cin >> giaBanBuon;
    cout << "Nh?p t? l? tãng giá (vi du: 100% laÌ 100): ";
    cin >> tyLeTangGia;

    // Tính toán giá bán l?
    double giaBanLe = TinhGiaBanLe(giaBanBuon, tyLeTangGia);

    if (giaBanLe >= 0) {
        // Hi?n th? giá bán l?
        cout << "Giaì baìn leÒ cuÒa saÒn phâÒm laÌ: " << giaBanLe << " ðôÌng" << endl;
    } else {
        cout << "LôÞi: Giaì triò nhâòp vaÌo không hõòp lêò." << endl;
    }

    return 0;
}
