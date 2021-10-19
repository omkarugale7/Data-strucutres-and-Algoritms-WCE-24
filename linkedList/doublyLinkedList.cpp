#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;
};

void create(Node *&head, int n, int a[])
{
    Node *p = head;
    for (int i = 1; i < n; i++)
    {
        Node *t = new Node;
        t->data = a[i];
        t->prev = p->next;
        p->next = t;
        t->next = 0;
        p = t;
    }
}
void insertBeforeHead(Node *&head, int x)
{
    Node *t = new Node;
    t->prev = 0;
    t->next = head;
    t->data = x;
    head = t;
}

void insertAtPosition(Node *&head, int pos, int x)
{
    int i = 1;
    Node *t = new Node;
    t->data = x;
    Node *p = head, *q = 0;
    while (i <= pos)
    {
        q = p;
        p = p->next;
        i++;
    }
    t->next = p;
    p->prev = t->next;
    t->prev = q->next;
    q->next = t;
}

int dele(Node *&head, int pos)
{

    if (head == NULL)
        return -1;

    int x = -1;
    if (pos == 1)
    {
        Node *p = head;
        x = p->data;
        head = head->next;
        delete p;
    }

    else
    {
        int i = 1;
        Node *p = head;
        while (i--)
        {
            p = p->next;
        }
        x = p->data;
        head->next = p->next;
        p->next->prev = head->next;
        delete p;
    }
    return x;
}

void display(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{

    int n;
    cout << "Enter number of elements:";
    cin >> n;
    int a[n];

    Node *head;
    head = new Node;
    head->prev = 0;
    head->next = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ins, pos;
    head->data = a[0];
    create(head, n, a);
    // cout<<"Enter number to insert in a list:";
    // cin>>ins;

    // insertBeforeHead(head,ins);
    // insertAtPosition(head,3,ins);
    // cout<<"Enter the position to delete:";
    // cin>>pos;
    // int x=dele(head,pos);
    //display(head);
    //cout<<endl<<x<<" is deleted ";

    display(head);

    return 0;
}
