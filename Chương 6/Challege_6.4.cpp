#include <iostream>
#include <string>
using namespace std;

// H�m �? nh?p s? l�?ng v? tai n?n trong m?t khu v?c
int getNumAccidents(const string& region) {
    int accidents;
    cout << "Nh?p s? v? tai n?n � t� ��?c b�o c�o ? khu v?c " << region << " trong n�m qua: ";
    cin >> accidents;
    while (accidents < 0) {
        cout << "S? v? tai n?n kh�ng h?p l?. Vui l?ng nh?p l?i: ";
        cin >> accidents;
    }
    return accidents;
}

// H�m �? x�c �?nh khu v?c c� �t tai n?n nh?t
void findLowest(int& accidentsNorth, int& accidentsSouth, int& accidentsEast, int& accidentsWest, int& accidentsCentral) {
    string safestRegion;
    int lowestAccidents = accidentsNorth;

    if (accidentsSouth < lowestAccidents) {
        lowestAccidents = accidentsSouth;
        safestRegion = "Nam";
    }
    if (accidentsEast < lowestAccidents) {
        lowestAccidents = accidentsEast;
        safestRegion = "��ng";
    }
    if (accidentsWest < lowestAccidents) {
        lowestAccidents = accidentsWest;
        safestRegion = "T�y";
    }
    if (accidentsCentral < lowestAccidents) {
        safestRegion = "Trung B?";
    }

    cout << "Khu v?c " << safestRegion << " c� �t v? tai n?n � t� nh?t: " << lowestAccidents << " v?." << endl;
}

int main() {
    int accidentsNorth, accidentsSouth, accidentsEast, accidentsWest, accidentsCentral;

    accidentsNorth = getNumAccidents("B?c");
    accidentsSouth = getNumAccidents("Nam");
    accidentsEast = getNumAccidents("��ng");
    accidentsWest = getNumAccidents("T�y");
    accidentsCentral = getNumAccidents("Trung B?");

    findLowest(accidentsNorth, accidentsSouth, accidentsEast, accidentsWest, accidentsCentral);

    return 0;
}
