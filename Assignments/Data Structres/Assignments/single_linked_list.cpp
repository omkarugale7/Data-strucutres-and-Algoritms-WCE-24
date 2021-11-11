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

// To insert a node at beginning
void push(Node* &root,int n)
{
	// New Node
	Node *temp = new Node();
	temp->data = n;
	temp->link=root;
	root=temp;
}

// To insert a node at the end of Linked List
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


// To delete a particular node
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

// To delete a node at particular location
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