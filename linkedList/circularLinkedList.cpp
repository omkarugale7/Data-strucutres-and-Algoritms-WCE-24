#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *link;
};

void create(Node *head, int n, int a[])
{
    Node *t, *p;
    p = head;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->link = 0;
        p->link = t;
        p = t;
    }
    p->link = head;
}
void insertAt(Node *&head, int x, int pos)
{
    Node *r, *p;
    r = new Node;
    r->data = x;
    p = head;
    for (int i = 0; i < pos - 1; i++)
    {
        p = p->link;
    }
    r->link = p->link;
    p->link = r;
}
void display(Node *head)
{
    Node *p;
    p = head;
    do
    {
        cout << p->data << " ";
        p = p->link;
    } while (p != head);
}
void dele(Node *head, int pos)
{
    Node *t, *p, *q;
    p = head;

    
    
        for (int i = 0; i < pos - 1; i++)
        {
            q = p;
            p = p->link;
        }
        q->link = p->link;
        delete p;
    
}

int main()
{

    int n;
    cin >> n;
    int a[10];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    Node *head;
    head = new Node;
    head->data = a[0];
    head->link = 0;

    create(head, n, a);
    insertAt(head,10000,5);
    dele(head, 1);

    display(head);

    return 0;
}
