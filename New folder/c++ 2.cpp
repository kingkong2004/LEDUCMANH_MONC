#include<iostream>
using namespace std;
int main()
{
char ascii;
int i;
for(i=0;i<=127;i++)
{
ascii=i;
cout<<ascii <<" ";
if(i%16==0)
cout<<endl; 
} 
return 0; 
}
