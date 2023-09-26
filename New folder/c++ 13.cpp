#include<iostream>
using namespace std;
int main()
{
	const int SO_DUNG = -99;
	int x,max,min;
	cout<<"nhap x (se dung khi nhap -99) :  ";
	cin>>x;
	min=x=max;
	while (x!= -99){
		if(x<min)min=x;
		if(x>max)max=x;
			cout<<"nhap x (se dung khi nhap -99) :  ";
			cin>>x;
			if(x==-99)
			cout<<"STOP HERE"<<endl; 
	}
	cout<<"so lon nhat la :  "<<max<<endl;
	cout<<"so nho nhat la :  "<<min<<endl;
	return 0;
 } 
