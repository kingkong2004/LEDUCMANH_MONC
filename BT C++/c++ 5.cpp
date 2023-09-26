#include<iostream>
using namespace std;
int main()
{
	int x= 2500 ;
	float y = .04;
	int i,tong; 
	for (i=0;i<=6;i++){
		tong=x*y;
		cout<<"lai suat du kien "<<i<<"nam :   "<<tong<<endl;
		x +=tong; 
	}
	return 0; 
 } 
