#include<iostream>
using namespace std;
int main()
{
	float GIO,DAM,x;
	 cout<<"nhap so km da di :   ";
	 cin>>DAM;
	 while(DAM<=0){
	  	cout<<"khong nhap so am"<<endl;
		  cout<<"nhap so KM da di :  ";
		  cin>>GIO;
	}
	 cout<<"nhap so gio da di :  ";
	 cin>>GIO;
	  while(GIO<=0){
	  	cout<<"khong nhap so am"<<endl;
		  cout<<"nhap so gio da di :  ";
		  cin>>GIO; 
	  } 
	  x=GIO*DAM;
	  for(int i=1;i<=GIO;i++){
	  	x=i*DAM;
	  	cout<<"xe di duoc trong "<<i<<"gio la: "<<x<<" km"<<endl; 
	  } 
	  return 0; 
 } 
