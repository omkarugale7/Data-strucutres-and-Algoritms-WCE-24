// 2.	Write a program using class to accept 5 numbers from user and display largest, second largest and smallest, second smallest and middle number among five.

#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"Enter 5 Numbers : "<<endl;
	int arr[5];
	for(int i=0;i<5;i++)
		cin>>arr[i];
	sort(arr,arr+5);
	cout<<"Smallest Number : "<<arr[0]<<endl;
	cout<<"2nd Smallest Number : "<<arr[1]<<endl;
	cout<<"Middle Number : "<<arr[2]<<endl;
	cout<<"2nd Largest Number : "<<arr[3]<<endl;
	cout<<"Largest Number : "<<arr[4]<<endl;
	
	return 0;
}