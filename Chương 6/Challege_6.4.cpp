#include <iostream>
#include <string>
using namespace std;

// Hàm ð? nh?p s? lý?ng v? tai n?n trong m?t khu v?c
int getNumAccidents(const string& region) {
    int accidents;
    cout << "Nh?p s? v? tai n?n ô tô ðý?c báo cáo ? khu v?c " << region << " trong nãm qua: ";
    cin >> accidents;
    while (accidents < 0) {
        cout << "S? v? tai n?n không h?p l?. Vui l?ng nh?p l?i: ";
        cin >> accidents;
    }
    return accidents;
}

// Hàm ð? xác ð?nh khu v?c có ít tai n?n nh?t
void findLowest(int& accidentsNorth, int& accidentsSouth, int& accidentsEast, int& accidentsWest, int& accidentsCentral) {
    string safestRegion;
    int lowestAccidents = accidentsNorth;

    if (accidentsSouth < lowestAccidents) {
        lowestAccidents = accidentsSouth;
        safestRegion = "Nam";
    }
    if (accidentsEast < lowestAccidents) {
        lowestAccidents = accidentsEast;
        safestRegion = "Ðông";
    }
    if (accidentsWest < lowestAccidents) {
        lowestAccidents = accidentsWest;
        safestRegion = "Tây";
    }
    if (accidentsCentral < lowestAccidents) {
        safestRegion = "Trung B?";
    }

    cout << "Khu v?c " << safestRegion << " có ít v? tai n?n ô tô nh?t: " << lowestAccidents << " v?." << endl;
}

int main() {
    int accidentsNorth, accidentsSouth, accidentsEast, accidentsWest, accidentsCentral;

    accidentsNorth = getNumAccidents("B?c");
    accidentsSouth = getNumAccidents("Nam");
    accidentsEast = getNumAccidents("Ðông");
    accidentsWest = getNumAccidents("Tây");
    accidentsCentral = getNumAccidents("Trung B?");

    findLowest(accidentsNorth, accidentsSouth, accidentsEast, accidentsWest, accidentsCentral);

    return 0;
}
