#include<iostream>
using namespace std;
int main()
{
	int NGAY_LAM_VIEC;
	int LUONG = 1; 
	cout << "So ngày làm viec là: ";
	cin >> NGAY_LAM_VIEC; 
	
	while(NGAY_LAM_VIEC <= 0){
		cout << "Sai du lieu!" << endl;
		cout << "So ngày làm viec là: ";
		cin >> NGAY_LAM_VIEC; 
	} 
	
	for(int i = 1; i <= NGAY_LAM_VIEC; i++){
		if(i == 1) 
			cout << "Luong ngày " << i << " là: " << LUONG << endl;
		else
		{
			LUONG = LUONG * 2;
			cout << "Luong ngày " << i << " là: " << LUONG << endl; 
		}
	}
	
	return 0; 
}

