#include<iostream>
using namespace std;
int main()
{
	int x,i;
	 int tong=0  ;
	cout<<"nhap so nguyen duong : ";
	cin>>x;
	while(x<0){
		cout<<"nhap lai ";
		cout<<"nhap so nguyen duong : ";
		cin>>x; 
	}
	
	 for(i=1;i<=x;i++)
	 {
	 	cout<<tong<<"+"<<i<<"="; 
	 	tong +=i;
	 	cout<<tong<<endl; 
	}
	 	cout<<"tong = "<<tong;
		 return 0; 
		 
}
