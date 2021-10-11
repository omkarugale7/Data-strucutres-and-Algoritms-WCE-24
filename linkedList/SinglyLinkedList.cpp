#include<bits/stdc++.h>
using namespace std ;

class Node{
    public:
        int data ;
        Node* next ;
        Node(int data, Node* next)
        {
           this->data = data;
           this->next = next;
        }
} *head ;

void insertAtFront(Node* &head, int val)
{
    if (head == NULL) {
        Node* n = new Node(val, NULL) ;
        head = n; 
    }
    else{
        Node* n = new Node(val, head) ;
        head = n ;
    }
}

void insertAt(Node* &head, int index, int val)
{
    if (index == 0){
        if (head == NULL) head = new Node(val, NULL) ;
        else {
            Node* n = new Node(val, head) ;
        }
        return ;
    }

    int i = 1 ;
    Node* curr = head ;

    for (; i < index && curr->next != NULL ; i++) curr = curr->next;

    if (i == index)
    {
     Node* n = new Node(val, curr->next) ;
     curr->next = n ;
    }
}


void deleteNode(Node* &head, int index)
{
    if (head == NULL or index < 0) return ;

    Node* curr = head ;
    
    if (index == 0) {
        Node* to_delete = head ;
        head = head->next;
        delete to_delete;
        return ;
    }
      int i ;
    for (i = 1; i < index and curr->next!=NULL ; i++) curr = curr->next;

    if (i == index) {
      Node* to_delete = curr->next;
      curr->next = curr->next->next ;
      delete to_delete;
    }
}


void printList(Node* head)
{
    Node* curr = head ;
    while (curr != NULL)
    {
        cout << curr->data << " " ;
        curr = curr->next ;
    }
    cout<<"\n" ;
}


void reverse_list(Node* &head)
{
    Node* r = NULL ;
    Node* q = head , *p ;

    while (q != NULL)
    {
        p = q->next;
        q->next = r ;
        r = q ;
        q = p ;
    } 

    head = r ;
}


void recursive_reverse(Node* n, Node* t)
{ 
    if (n != NULL)
    {
        recursive_reverse(n->next, n) ;
        n->next = t ;
    }
    else head = t ;

}

void removeLoop(Node* head)
{
    if (head == NULL or head->next == NULL) 
    {
        cout << "No Loop\n" ;
        return ;
    }

    Node * fast = head ;
    Node * slow = head ;
    
    do{
        fast = fast->next->next;
        slow = slow->next;
        if (fast == NULL or fast->next == NULL) {
            cout << "No Loop\n" ;
            return ;
        }
    } while (fast != slow) ;

    fast = head ;
    while (fast->next != slow->next) {
        fast = fast->next; 
        slow = slow->next ;
    }

    slow->next = NULL ;
    cout << "Removed the loop\n" ;

}

// point last node to node at position = pos
void makeLoop(Node* &head, int pos)
{
    Node * last = head ;
    while (last->next != NULL) last = last->next ;

    Node *startingOfLoop = head ;

    for (int i = 1 ; i < pos ; i++) startingOfLoop = startingOfLoop->next;

    last->next = startingOfLoop ;

}


int main()
{
    insertAtFront(head, 0) ;
    for (int i = 1 ; i < 10 ; i++) {
        insertAt(head, i, i) ;
    }

    makeLoop(head, 5) ;

    removeLoop(head) ;
    printList(head) ;
    reverse_list(head) ;
    printList(head) ;

    deleteNode(head, 5) ;
    printList(head) ;

}