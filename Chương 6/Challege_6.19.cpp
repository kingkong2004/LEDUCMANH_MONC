#include <iostream>
#include <fstream>
using namespace std;

// H�m t�nh t?ng chi ph� cho b?nh nh�n nh?p vi?n
double tinhTongChiPhiNhapVien(int soNgay, double giaMoiNgay, double chiPhiThuoc, double chiPhiDichVu) {
    return (soNgay * giaMoiNgay) + chiPhiThuoc + chiPhiDichVu;
}

// H�m t�nh t?ng chi ph� cho b?nh nh�n ngo?i tr�
double tinhTongChiPhiNgoaiTru(double chiPhiDichVu, double chiPhiThuoc) {
    return chiPhiDichVu + chiPhiThuoc;
}

int main() {
    ofstream outFile("bao_cao_benh_vien.txt");
    if (!outFile) {
        cerr << "L?i khi m? t?p tin." << endl;
        return 1;
    }

    char loaiBenhNhan;
    cout << "Lo?i b?nh nh�n (I cho b?nh nh�n nh?p vi?n, O cho b?nh nh�n ngo?i tr�): ";
    cin >> loaiBenhNhan;

    if (loaiBenhNhan != 'I' && loaiBenhNhan != 'i' && loaiBenhNhan != 'O' && loaiBenhNhan != 'o') {
        cout << "Lo?i b?nh nh�n kh�ng h?p l?." << endl;
        return 1;
    }

    double tongChiPhi;

    if (loaiBenhNhan == 'I' || loaiBenhNhan == 'i') {
        int soNgay;
        double giaMoiNgay, chiPhiThuoc, chiPhiDichVu;

        cout << "S? ng�y n?m vi?n: ";
        cin >> soNgay;

        cout << "Gi� m?i ng�y: $";
        cin >> giaMoiNgay;

        cout << "Chi ph� thu?c: $";
        cin >> chiPhiThuoc;

        cout << "Chi ph� d?ch v? b?nh vi?n: $";
        cin >> chiPhiDichVu;

        if (soNgay < 0 || giaMoiNgay < 0 || chiPhiThuoc < 0 || chiPhiDichVu < 0) {
            cout << "D? li?u kh�ng h?p l?. Kh�ng ch?p nh?n s? �m." << endl;
            return 1;
        }

        tongChiPhi = tinhTongChiPhiNhapVien(soNgay, giaMoiNgay, chiPhiThuoc, chiPhiDichVu);
    } else {
        double chiPhiThuoc, chiPhiDichVu;

        cout << "Chi ph� thu?c: $";
        cin >> chiPhiThuoc;

        cout << "Chi ph� d?ch v? b?nh vi?n: $";
        cin >> chiPhiDichVu;

        if (chiPhiThuoc < 0 || chiPhiDichVu < 0) {
            cout << "D? li?u kh�ng h?p l?. Kh�ng ch?p nh?n s? �m." << endl;
            return 1;
        }

        tongChiPhi = tinhTongChiPhiNgoaiTru(chiPhiThuoc, chiPhiDichVu);
    }

    cout << "T?ng chi ph�: $" << tongChiPhi << endl;

    // L�u b�o c�o v�o t?p tin
    outFile << "Lo?i b?nh nh�n: " << ((loaiBenhNhan == 'I' || loaiBenhNhan == 'i') ? "B?nh nh�n nh?p vi?n" : "B?nh nh�n ngo?i tr�") << endl;
    outFile << "T?ng chi ph�: $" << tongChiPhi << endl;
    outFile.close();

    return 0;
}
