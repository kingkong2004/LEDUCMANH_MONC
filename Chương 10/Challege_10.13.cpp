#include <iostream>
#include <string>
using namespace std;

int main() {
    string ngayNhap;
    string thang, ngay, nam;

    cout << "Nhap ngay (mm/dd/yyyy): ";
    cin >> ngayNhap;

    // T�ch chu?i th�nh th�ng, ng�y v� nam b?ng c�ch t�m d?u '/'
    size_t viTri1 = ngayNhap.find('/');
    size_t viTri2 = ngayNhap.rfind('/');

    if (viTri1 != string::npos && viTri2 != string::npos) {
        thang = ngayNhap.substr(0, viTri1);
        ngay = ngayNhap.substr(viTri1 + 1, viTri2 - viTri1 - 1);
        nam = ngayNhap.substr(viTri2 + 1);

        // Chuy?n d?i th�ng t? chu?i sang s?
        int thangSo = stoi(thang);

        // M?ng t�n th�ng
        string tenThang[] = {"", "Th�ng 1", "Th�ng 2", "Th�ng 3", "Th�ng 4", "Th�ng 5", "Th�ng 6", "Th�ng 7", "Th�ng 8", "Th�ng 9", "Th�ng 10", "Th�ng 11", "Th�ng 12"};

        // Ki?m tra th�ng h?p l?
        if (thangSo >= 1 && thangSo <= 12) {
            cout << "Ngay: " << tenThang[thangSo] << " " << ngay << " nam " << nam << endl;
        } else {
            cout << "Ngay khong hop le." << endl;
        }
    } else {
        cout << "Dinh dang ngay khong hop le." << endl;
    }

    return 0;
}

