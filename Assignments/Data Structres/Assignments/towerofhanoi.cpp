#include<iostream>
using namespace std;
void towerofHanoi(int n,char src,char dest,char helper)
{
	if(n==0)
	return;
	towerofHanoi(n-1,src,helper,dest);
	cout<<"Move From "<<src<<" To "<<dest<<endl;
	towerofHanoi(n-1,helper,dest,src);
}
int main()
{
	int n;
	cin>>n;
	towerofHanoi(n,'A','C','B');
	return 0;
}