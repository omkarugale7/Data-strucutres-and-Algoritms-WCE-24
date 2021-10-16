// 3.	Write a program to read 3 values of a, b and c and calculate value of X as
// X= a*b – c/d
// Where d=a+b

#include<iostream>
using namespace std;

int main()
{
	cout<<"Enter the value of a,b & c : "<<endl;
	int a,b,c,d;
	cin>>a>>b>>c;
	float x;
	d = a+b;
	x = (a*b) - ((float)c/d);
	cout<<"X = "<<x<<endl;
	return 0;
}