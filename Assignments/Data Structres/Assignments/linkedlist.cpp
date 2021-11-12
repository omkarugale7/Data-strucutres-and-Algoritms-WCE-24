#include<bits/stdc++.h>
using namespace std;

// Declaration Of Linked List
class Node
{
	public:
		int data;
		Node *link;
};

// Traversing Or Printing The LinkedList
void printList(Node *p)
{
	while(p!=NULL)
	{
		cout<<p->data<<" -> ";
		p=p->link;
	}
}

void push(Node* &root,int n)
{
	// New Node
	Node *temp = new Node();
	temp->data = n;
	temp->link=root;
	root=temp;
}

void append(Node* &root, int n)
{
	Node *temp = new Node();
	// Another pointer for traversing
	Node *p = root;
	temp->data = n;
	temp->link=NULL;
	if(root==NULL)
	{
		root = temp;
		return;
	}
		while(p->link!=NULL)
		{
			p = p->link;
		}
		p->link=temp;
}

void addafter(Node* &root , int n , int loc)
{
	Node *temp = new Node();
	temp->data = n;
	temp->link=NULL;
	if(loc==1)
	{
		temp->link=root;
		root = temp;
		return;
	}
	// Pointer Pointing to Required Node
	Node *p= root;
	// Pointer Pointing To Previous Node
	Node *q;
	while(loc>1)
	{
		q=p;
		p=p->link;
		loc--;
	}
	temp->link=p;
	q->link = temp;
}

void deletekey(Node* &root , int n)
{
	if(root==NULL)
	return;
	
	Node *p = root;
	if(p->data == n)
	{
		root = p->link;
		p->link = NULL;
		free(p);
		return;
	}
	Node *q;
	while(p->data!=n)
	{
		q=p;
		p=p->link;
	}
	q->link = p->link;
	p->link=NULL;
	free(p);
	return;

}

void deletenode(Node* &root , int loc)
{
	if(root == NULL)
		return;
	
	if(loc==1)
	{
		Node *p =root;
		root = p->link;
		p->link = NULL;
		free(p);
	}
	else
	{
		Node *p= root;
		Node *q;
		while(loc>1)
		{
			q=p;
			p = p->link;
			loc--;
		}
		q->link = p->link;
		p->link=NULL;
		free(p);
		return;
	}
}
 
void swapNodes(Node* &root, int x, int y)
{
 
    // Nothing to do if x and y are same
    if (x == y)
        return;
 
    Node *a = NULL, *b = NULL;
 
    // search for x and y in the linked list
    // and store therir pointer in a and b
    while (root) {
 
        if (root->data == x) {
            a = root;
        }
 
        else if (root->data == y) {
            b = root;
        }
 
        root = root->link;
    }
 
    // if we have found both a and b
    // in the linked list swap current
    // pointer and next pointer of these
    if (a && b) {
        Node* temp = a->link;
		a->link = b->link;
		b->link = temp;
    }
}

void reverselist(Node* &root)
{
	Node *curr=root;
	Node *prev=NULL,*next=NULL;
	while(curr!=NULL)
	{
		next = curr->link;
		curr->link = prev;
		prev = curr;
		curr = next;
	}
	root = prev;
}

// Driver Code
int main()
{
	Node* root = NULL;

	// Creates LinkedList root -> 3
	push(root,3);
	
	// LinkedList Becomes root -> 7 -> 3
	push(root,7);
	
	// LinkedList Becomes root -> 7 -> 3 -> 8
	append(root,8);
	
	// LinkedList Becomes root -> 7 -> 3 -> 8 -> 1
	append(root,1);
	
	// LinkedList Becomes root -> 7 -> 3 -> 8 -> 99 -> 1
	addafter(root,99,4);
	
	cout<<"The LinkedList is : ";
    printList(root);
	cout<<endl;
	
	// LinkedList becomes root -> 7 -> 3 -> 8 -> 99
	deletekey(root , 1);
	
	// LinkedList becomes root -> 99 -> 8 -> 3 -> 7
	reverselist(root);
	
	cout<<"The LinkedList After Reversal and Removal of 1 is : ";
    printList(root);
	cout<<endl;
	
	// LinkedList becomes root -> 99 -> 8 -> 7
	deletenode(root , 3);
	
	// LinkedList becomes root -> 7 -> 8 -> 99
	swapNodes(root,7,99);
	
	cout<<"The LinkedList After Swapping 1 and 3 is : ";
	printList(root);
	cout<<endl;
	
	return 0;
}