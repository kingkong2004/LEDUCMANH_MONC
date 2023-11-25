// Ch��ng tr?nh n�y tr?nh b�y c�ch s? d?ng m?t h�m �? in n?i dung c?a hai m?ng hai chi?u kh�c nhau.
 #include <iostream>
 #include <iomanip>
 using namespace std;

 // H?ng s? to�n c?c
 const int COLS = 4; // S? c?t trong m?i m?ng
 const int TBL1_ROWS = 3; // S? h�ng trong b?ng 1
 const int TBL2_ROWS = 4; // S? h�ng trong b?ng 2

 // Khai b�o h�m
 void showArray(const int[][COLS], int); // Nguy�n m?u h�m

 int main()
 {
     int table1[TBL1_ROWS][COLS] = {{1, 2, 3, 4},
                                    {5, 6, 7, 8},
                                    {9, 10, 11, 12}};
     int table2[TBL2_ROWS][COLS] = {{10, 20, 30, 40},
                                    {50, 60, 70, 80},
                                    {90, 100, 110, 120},
                                    {130, 140, 150, 160}};

     cout << "N?i dung c?a b?ng 1 l�:\n";
     showArray(table1, TBL1_ROWS);
     cout << "N?i dung c?a b?ng 2 l�:\n";
     showArray(table2, TBL2_ROWS);
     return 0;
 }

 //******************************************************************
 // �?nh ngh?a h�m showArray
 // �?i s? �?u ti�n l� m?t m?ng int hai chi?u v?i COLS c?t.
 // �?i s? th? hai, rows, x�c �?nh s? h�ng trong m?ng.
 // H�m n�y hi?n th? n?i dung c?a m?ng.
 //******************************************************************

 void showArray(const int numbers[][COLS], int rows)
 {
     for (int x = 0; x < rows; x++)
     {
         for (int y = 0; y < COLS; y++)
         {
             cout << setw(4) << numbers[x][y] << " ";
         }
         cout << endl;
     }
 }
