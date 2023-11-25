// Chýõng tr?nh này tr?nh bày cách s? d?ng m?t hàm ð? in n?i dung c?a hai m?ng hai chi?u khác nhau.
 #include <iostream>
 #include <iomanip>
 using namespace std;

 // H?ng s? toàn c?c
 const int COLS = 4; // S? c?t trong m?i m?ng
 const int TBL1_ROWS = 3; // S? hàng trong b?ng 1
 const int TBL2_ROWS = 4; // S? hàng trong b?ng 2

 // Khai báo hàm
 void showArray(const int[][COLS], int); // Nguyên m?u hàm

 int main()
 {
     int table1[TBL1_ROWS][COLS] = {{1, 2, 3, 4},
                                    {5, 6, 7, 8},
                                    {9, 10, 11, 12}};
     int table2[TBL2_ROWS][COLS] = {{10, 20, 30, 40},
                                    {50, 60, 70, 80},
                                    {90, 100, 110, 120},
                                    {130, 140, 150, 160}};

     cout << "N?i dung c?a b?ng 1 là:\n";
     showArray(table1, TBL1_ROWS);
     cout << "N?i dung c?a b?ng 2 là:\n";
     showArray(table2, TBL2_ROWS);
     return 0;
 }

 //******************************************************************
 // Ð?nh ngh?a hàm showArray
 // Ð?i s? ð?u tiên là m?t m?ng int hai chi?u v?i COLS c?t.
 // Ð?i s? th? hai, rows, xác ð?nh s? hàng trong m?ng.
 // Hàm này hi?n th? n?i dung c?a m?ng.
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
