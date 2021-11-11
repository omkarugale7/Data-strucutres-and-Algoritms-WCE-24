#include<bits/stdc++.h>
using namespace std;
#define CAPACITY 7
class stack2
{
	public:
	int *arr;
	int top;
	stack(){
		arr = new int[CAPACITY];
		top = -1;
	}
	
	int isFull()
	{
		if(top==CAPACITY-1)
			return 1;
		return 0;
	}
	
	int isEmpty()
	{
		if(top==-1)
		return 1;
		return 0;
	}
	
	void push()
	{
		if(top==CAPACITY-1)
		{
			cout<<"Stack Overflow"<<endl;
			return;
		}
		top++;
		cout<<"Enter Element To Insert"<<endl;
		cin>>arr[top];
		cout<<arr[top]<<" pushed "<<endl;
	}
	
	void pop()
	{
		if(top==-1)
		{
			cout<<"Stack UnderFlow"<<endl;
			return;
		}
		cout<<arr[top]<<" popped "<<endl;
		top--;
	}

	void peak()
	{
		if(top==-1)
		{
			cout<<"Stack is Empty"<<endl;
			return;
		}
		cout<<"The Peak element is "<<arr[top]<<endl;
	}

	void traverse()
	{
		if(top==-1)
		{
			cout<<"Stack is Empty"<<endl;
			return;
		}
		cout<<"The Elements Of Stack Are :"<<endl;
		for(int i=0;i<=top;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}

	void myexit()
	{
		cout<<endl;
		cout<<"Thanks For Using Stack With Ravi Jha"<<endl;
		cout<<"We Hope You Would Have Liked it"<<endl;
		exit(1);
	}
};


int main()
{
	stack2 stack1;
	start:
	cout<<"Choose From The Following Operations with Class: "<<endl;
	cout<<"1.Push\n2.Pop\n3.Peak\n4.Traverse\n5.Quit\n";
	int choice;
	cin>>choice;
	switch(choice)
	{
		case 1:
		stack1.push();
		goto start;
		break;
		case 2:
		stack1.pop();
		goto start;
		break;
		case 3:
		stack1.peak();
		goto start;
		break;
		case 4:
		stack1.traverse();
		goto start;
		break;
		case 5:
		stack1.myexit();
		default:
		cout<<"Wrong Option Selected"<<endl;
		goto start;
	}
}