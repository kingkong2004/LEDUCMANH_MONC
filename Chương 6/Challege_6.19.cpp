#include <iostream>
#include <fstream>
using namespace std;

// Hàm tính t?ng chi phí cho b?nh nhân nh?p vi?n
double tinhTongChiPhiNhapVien(int soNgay, double giaMoiNgay, double chiPhiThuoc, double chiPhiDichVu) {
    return (soNgay * giaMoiNgay) + chiPhiThuoc + chiPhiDichVu;
}

// Hàm tính t?ng chi phí cho b?nh nhân ngo?i trú
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
    cout << "Lo?i b?nh nhân (I cho b?nh nhân nh?p vi?n, O cho b?nh nhân ngo?i trú): ";
    cin >> loaiBenhNhan;

    if (loaiBenhNhan != 'I' && loaiBenhNhan != 'i' && loaiBenhNhan != 'O' && loaiBenhNhan != 'o') {
        cout << "Lo?i b?nh nhân không h?p l?." << endl;
        return 1;
    }

    double tongChiPhi;

    if (loaiBenhNhan == 'I' || loaiBenhNhan == 'i') {
        int soNgay;
        double giaMoiNgay, chiPhiThuoc, chiPhiDichVu;

        cout << "S? ngày n?m vi?n: ";
        cin >> soNgay;

        cout << "Giá m?i ngày: $";
        cin >> giaMoiNgay;

        cout << "Chi phí thu?c: $";
        cin >> chiPhiThuoc;

        cout << "Chi phí d?ch v? b?nh vi?n: $";
        cin >> chiPhiDichVu;

        if (soNgay < 0 || giaMoiNgay < 0 || chiPhiThuoc < 0 || chiPhiDichVu < 0) {
            cout << "D? li?u không h?p l?. Không ch?p nh?n s? âm." << endl;
            return 1;
        }

        tongChiPhi = tinhTongChiPhiNhapVien(soNgay, giaMoiNgay, chiPhiThuoc, chiPhiDichVu);
    } else {
        double chiPhiThuoc, chiPhiDichVu;

        cout << "Chi phí thu?c: $";
        cin >> chiPhiThuoc;

        cout << "Chi phí d?ch v? b?nh vi?n: $";
        cin >> chiPhiDichVu;

        if (chiPhiThuoc < 0 || chiPhiDichVu < 0) {
            cout << "D? li?u không h?p l?. Không ch?p nh?n s? âm." << endl;
            return 1;
        }

        tongChiPhi = tinhTongChiPhiNgoaiTru(chiPhiThuoc, chiPhiDichVu);
    }

    cout << "T?ng chi phí: $" << tongChiPhi << endl;

    // Lýu báo cáo vào t?p tin
    outFile << "Lo?i b?nh nhân: " << ((loaiBenhNhan == 'I' || loaiBenhNhan == 'i') ? "B?nh nhân nh?p vi?n" : "B?nh nhân ngo?i trú") << endl;
    outFile << "T?ng chi phí: $" << tongChiPhi << endl;
    outFile.close();

    return 0;
}
