#include<iostream>
using namespace std;

#define n 3

class queue{
	int *arr;
	int front=-1,back=-1;
	public:
	queue(){
		arr = new int[n];
	}
	void push(int x)
	{
		if(back==n-1)
		{
			cout<<"Queue Overflow"<<endl;
			return;
		}
		back++;
		arr[back]=x;
		if(front==-1)
			front++;
	}
	void pop()
	{
		if(front==-1 || front==back+1)
		{
			cout<<"Queue Underflow"<<endl;
			return;
		}
		for(int i=i;i<=back;i++)
		{
			arr[i-1] = arr[i];
		}
		back--;
	}
	
	int peek()
	{
		if(front==-1 || front==back+1)
		{
			cout<<"Queue is Empty"<<endl;
			return -1;
		}
		return arr[front];
	}
	
	bool empty()
	{
		if(front==-1 || front==back+1)
		{
			return true;
		}
		return false;
	}
	
};

int main()
{
	queue q;
	
	q.push(7);
	q.push(3);
	q.push(8);
	q.push(99);
	
	cout<<q.peek()<<endl;
	q.pop();
	cout<<q.peek()<<endl;
	q.pop();
	cout<<q.peek()<<endl;
	q.pop();
	q.push(99);
	cout<<q.peek()<<endl;
	q.pop();
	
	if(q.empty())
		cout<<"Queue is Empty"<<endl;
	return 0;
}