// 4.	Write a C++ Program to Check given number is Super Prime number or not using function.( Super prime number is one whose all digits are prime and number is also prime)

#include<iostream>
#include<cmath>
using namespace std;

int isPrime(int n)
{
	int count=0;
	if(n==1)
		return 0;
	if(n==2 || n==3)
		return 1;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			count++;
			break;
		}
	}
	if(count)
		return 0;
	return 1;
}

int isSuperPrime(int n)
{
	int r;
	while(n>0)
	{
		r=n%10;
		if(!isPrime(r))
			return 0;
		n=n/10;
	}
	return 1;
}

int main()
{
	int n;
	cin>>n;
	if(!isPrime(n))
	{
		cout<<"Not A Super Prime Number"<<endl;
		return 0;
	}
	if(isSuperPrime(n))
	{
		cout<<"Super Prime Number"<<endl;
	}
	else
	{
		cout<<"Not A Super Prime Number"<<endl;
	}
	return 0;
}