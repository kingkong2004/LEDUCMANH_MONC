#include<iostream>
#include<string> 
using namespace std;
int main()
{
	int i; 
	string x,first,last ; 
	int SO_LUONG;
	cout<<"nhap so luong hoc sinh :  ";
	cin>>SO_LUONG;
	while(SO_LUONG<1 || SO_LUONG>25){
	
	cout<<"SAIIII,HAY NHAP LAI(1<x<25)"<<endl; 
	cout<<"nhap so luong hoc sinh :   "<<endl; 
	cin>>SO_LUONG; 	 
 } 
 cout<<"nhap ten hoc sinh 1:  ";
 cin>>x;
    first = last = x; // gan ten hoc sinh  

    for (i = 1; i < SO_LUONG; i++) {
        cout << "Nhap ten hoc sinh " << i + 1 << ": ";
        cin >> x; 
            
        

        if (x < first)
            first = x;
        if (x > last)
            last = x;
    }
 cout<<"hoc sinh dung dau tien la:  "<<first<<endl;
 cout<<"hoc sinh dung cuoi cung la:  "<<last<<endl;
 return 0; 
}
 
