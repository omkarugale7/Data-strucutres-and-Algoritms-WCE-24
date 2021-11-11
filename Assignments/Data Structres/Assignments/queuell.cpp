#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
		Node(int n)
		{
			data = n;
			next = NULL;
		}
};

class queue{
	Node *front,*back;
	public:
	queue()
	{
		front=NULL;
		back=NULL;
	}
	
	void enqueue(int x)
	{
		Node *n = new Node(x);
		if(front==NULL)
		{
			front = n;
			back = n;
			return;
		}
		back->next = n;
		back = n;
	}
	
	void deque()
	{
		if(front == NULL)
		{
			cout<<"Queue Undeflow"<<endl;
			return;
		}
		Node* todelete = front;
		front=front->next;
		
		delete todelete;
	}
	
	int peek()
	{
		if(front == NULL)
		{
			cout<<"Queue is Empty"<<endl;
			return -1;
		}
		return front->data;
	}
	
	bool empty()
	{
		if(front == NULL)
		{
			return 1;
		}
		return 0;
	}
};

int main()
{
	queue q;
	q.enqueue(7);
	q.enqueue(3);
	q.enqueue(8);
	cout<<q.peek()<<endl;
	q.deque();
	cout<<q.peek()<<endl;
	q.deque();
	cout<<q.peek()<<endl;
	q.deque();
	cout<<q.empty()<<endl;
	return 0;
}