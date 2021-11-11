#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* left;
		Node* right;
};

void printList(Node *p)
{
	while(p!=NULL)
	{
		cout<<p->data<<" -> ";
		p=p->right;
	}
	cout<<endl;	
}

void push(Node **root , int n)
{
	Node *temp = new Node();
	temp->data = n;
	temp->left = NULL;
	temp->right = (*root);
	if((*root)!=NULL)
		(*root)->left=temp;
	(*root)=temp;
}

void append(Node **root , int n)
{
		Node *temp = new Node();
		temp->data = n;
		temp->left = NULL;
		temp->right = NULL;
		Node *p = (*root);
		if(p==NULL)
		{
			(*root) = temp;
		}
		else
		{
			while(p->right!=NULL)
				p=p->right;
			
			p->right = temp;
			temp->left = p;
		}

}

void addafter(Node **root, int n , int node)
{
	Node *temp = new Node();
	temp->data = n;
	temp->left = NULL;
	temp->right = NULL;
	if(*(root)==NULL)
	{
		cout<<"Kaha Kaha Se Aa Jaate Hai Ye Log"<<endl;
		return;
	}
	Node *p = *(root),*q;
	while(p->data != node)
	{
		q = p;
		p = p->right;
	}
	if(p->right!=NULL)
	{
		temp->right = p->right;
		(p->right)->left = temp;
	}
	temp->left = p;
	p->right = temp;
}



int main()
{
	Node *root = NULL;
	addafter(&root ,18,99);
	append(&root,99);
	push(&root,8);
	push(&root,3);
	push(&root,7);
	append(&root,1);
	append(&root,54);
	addafter(&root ,17,54);
	addafter(&root ,10,8);
	
	printList(root);
	return 0;
}