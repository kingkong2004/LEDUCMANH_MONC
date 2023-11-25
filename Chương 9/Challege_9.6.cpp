#include <iostream>
using namespace std;

// Nguyên m?u hàm
void arrSelectSort(int *[], int);
void showArray(const int[], int);
void showArrPtr(int *[], int);

int main()
{
    int numDonations;

    // Yêu c?u ngý?i dùng nh?p s? lý?ng quyên góp
    cout << "Nh?p s? lý?ng quyên góp: ";
    cin >> numDonations;

    if (numDonations <= 0) {
        cout << "S? lý?ng quyên góp không h?p l?. Chýõng tr?nh k?t thúc." << endl;
        return 1;
    }

    // C?p phát ð?ng m?t m?ng ð? lýu tr? các giá tr? quyên góp
    int *donations = new int[numDonations];

    // Yêu c?u ngý?i dùng nh?p giá tr? c?a các kho?n quyên góp
    for (int i = 0; i < numDonations; i++) {
        cout << "Nh?p quyên góp " << i + 1 << ": ";
        cin >> donations[i];
    }

    // T?o m?t m?ng con tr? t?i int.
    int **arrPtr = new int *[numDonations];

    for (int count = 0; count < numDonations; count++)
        arrPtr[count] = &donations[count];

    // S?p x?p các ph?n t? c?a m?ng con tr?.
    arrSelectSort(arrPtr, numDonations);

    // Hi?n th? quyên góp b?ng cách s? d?ng m?ng con tr?. Ði?u này
    // s? hi?n th? chúng theo th? t? tãng d?n.
    cout << "Các quyên góp, ðý?c s?p x?p theo th? t? tãng d?n: \n";
    showArrPtr(arrPtr, numDonations);

    // Hi?n th? các quyên góp theo th? t? ban ð?u.
    cout << "Các quyên góp, theo th? t? ban ð?u: \n";
    showArray(donations, numDonations);

    // Gi?i phóng b? nh? ð?ng ðý?c c?p phát
    delete[] donations;
    delete[] arrPtr;

    return 0;
}

// Ð?nh ngh?a hàm arrSelectSort.
void arrSelectSort(int *arr[], int size)
{
    int startScan, minIndex;
    int *minElem;

    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minElem = arr[startScan];
        for (int index = startScan + 1; index < size; index++)
        {
            if (*(arr[index]) < *minElem)
            {
                minElem = arr[index];
                minIndex = index;
            }
        }
        arr[minIndex] = arr[startScan];
        arr[startScan] = minElem;
    }
}

// Ð?nh ngh?a hàm showArray.
void showArray(const int arr[], int size)
{
    for (int count = 0; count < size; count++)
        cout << arr[count] << " ";
    cout << endl;
}

// Ð?nh ngh?a hàm showArrPtr.
void showArrPtr(int *arr[], int size)
{
    for (int count = 0; count < size; count++)
        cout << *(arr[count]) << " ";
    cout << endl;
}
