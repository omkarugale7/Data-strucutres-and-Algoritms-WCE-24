#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node* next;
	
	Node(int val)
	{
		data = val;
		next = NULL;
	}
};

void push(Node* &root , int n)
{
	Node *temp = new Node(n);
	Node* p=root;
	if(root==NULL)
	{
		temp->next = temp;
		root = temp;
		return;
	}
		while(p->next!=root)
		{
			p=p->next;
		}
		p->next = temp;
		temp->next = root;
		root = temp;
}

void append(Node* &root, int n)
{
	if(root==NULL)
	{
		push(root,n);
		return;
	}
	Node *temp = new Node(n);
	Node *p = root;
	while(p->next!=root)
	{
		p=p->next;
	}
	p->next = temp;
	temp->next = root;
}

void display(Node *root)
{
	Node *p=root;
	do{
		cout<<p->data<<" -> ";
		p=p->next;
	}while(p!=root);
	
	cout<<endl;
}

void deleteroot(Node* &root)
{
	Node *p=root,*q = root;
	while(p->next!=root)
	{
		p=p->next;
	}
	Node* temp = root;
	p->next = root->next;
	root=root->next;
	
	delete temp;
}

void deletenode(Node* &root, int loc)
{
	if(loc==1)
	{
		deleteroot(root);
		return;
	}
	Node *p = root;
	loc=loc-2;
	while(loc--)
	{
		p=p->next;
	}
	Node *temp = p->next;
	p->next = p->next->next;
	delete temp;
}

int main()
{
	Node *root=NULL;
	append(root,1);
	push(root,99);
	push(root,3);
	push(root,8);
	push(root,7);
	push(root,18);
	deletenode(root,1);
	append(root,17);
	deletenode(root,6);
	display(root);
	
	return 0;
}