#include<iostream>
using namespace std;

// Creating a Class Node for maintaining Linked List
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
  // Two nodes for start of queue and end of queue to make Operations feasible in O(1) instead of O(n)
	Node *front,*back;
	public:
	queue()
	{
		front=NULL;
		back=NULL;
	}
	
  // Basically adding a node at the end of the Linked List and shifting the back pointer to the newly added node
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
	
  //  We are not removing the node, Just shifting the front pointer to next node
	void deque()
	{
    // When queue is created it has no elements so front points to NULL
    // Also , when we removes all the elements front points to next of back which is equal to NULL
		if(front == NULL)
		{
			cout<<"Queue Undeflow"<<endl;
			return;
		}
		front=front->next;
	}
	
  // Just print the node value of front
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
