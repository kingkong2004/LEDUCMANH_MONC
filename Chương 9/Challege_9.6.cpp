#include <iostream>
using namespace std;

// Nguy�n m?u h�m
void arrSelectSort(int *[], int);
void showArray(const int[], int);
void showArrPtr(int *[], int);

int main()
{
    int numDonations;

    // Y�u c?u ng�?i d�ng nh?p s? l�?ng quy�n g�p
    cout << "Nh?p s? l�?ng quy�n g�p: ";
    cin >> numDonations;

    if (numDonations <= 0) {
        cout << "S? l�?ng quy�n g�p kh�ng h?p l?. Ch��ng tr?nh k?t th�c." << endl;
        return 1;
    }

    // C?p ph�t �?ng m?t m?ng �? l�u tr? c�c gi� tr? quy�n g�p
    int *donations = new int[numDonations];

    // Y�u c?u ng�?i d�ng nh?p gi� tr? c?a c�c kho?n quy�n g�p
    for (int i = 0; i < numDonations; i++) {
        cout << "Nh?p quy�n g�p " << i + 1 << ": ";
        cin >> donations[i];
    }

    // T?o m?t m?ng con tr? t?i int.
    int **arrPtr = new int *[numDonations];

    for (int count = 0; count < numDonations; count++)
        arrPtr[count] = &donations[count];

    // S?p x?p c�c ph?n t? c?a m?ng con tr?.
    arrSelectSort(arrPtr, numDonations);

    // Hi?n th? quy�n g�p b?ng c�ch s? d?ng m?ng con tr?. �i?u n�y
    // s? hi?n th? ch�ng theo th? t? t�ng d?n.
    cout << "C�c quy�n g�p, ��?c s?p x?p theo th? t? t�ng d?n: \n";
    showArrPtr(arrPtr, numDonations);

    // Hi?n th? c�c quy�n g�p theo th? t? ban �?u.
    cout << "C�c quy�n g�p, theo th? t? ban �?u: \n";
    showArray(donations, numDonations);

    // Gi?i ph�ng b? nh? �?ng ��?c c?p ph�t
    delete[] donations;
    delete[] arrPtr;

    return 0;
}

// �?nh ngh?a h�m arrSelectSort.
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

// �?nh ngh?a h�m showArray.
void showArray(const int arr[], int size)
{
    for (int count = 0; count < size; count++)
        cout << arr[count] << " ";
    cout << endl;
}

// �?nh ngh?a h�m showArrPtr.
void showArrPtr(int *arr[], int size)
{
    for (int count = 0; count < size; count++)
        cout << *(arr[count]) << " ";
    cout << endl;
}
