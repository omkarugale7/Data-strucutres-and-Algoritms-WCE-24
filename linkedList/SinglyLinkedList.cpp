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

// make a new node with given data and point its next to head
// make this new node head
void insertAtFront(Node* &head, int val)
{
        Node* n = new Node(val, head) ;
        head = n ;
}


// to insert at index, go to node at index-1. 
// new node's next = next of that node and then next of currNode to newNode
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

// to delete node at index.   Go to index-1 node and point its next to next.next
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

    // initial order r , q ->
    // now we change the next of q and set it to r. so r and q are reversed
    // but now we cannot move to original next of q.
    // for this we have third pointer p. Using p , q can move forward
    while (q != NULL)
    {
        p = q->next;
        q->next = r ;
        r = q ;
        q = p ;
    } 

    // finally set head of our linked list to last node
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

void removeLoop(Node* &n)
{
    // if only one node present then ther's no loop
    if (n == NULL or n->next == NULL) 
    {
        cout << "No Loop\n" ;
        return ;
    }

     // Here we are using Tortise and Hare (Floyd's algorithm)
    // fast pointer moves forward by two steps while slow moves by one step
    Node * fast = n ;
    Node * slow = n ;
    
    // keep slow and fast moving until they meet at same point
    do{
        fast = fast->next->next;
        slow = slow->next;

         // if fast == null or fast.next == null then there's no loop in linked list. Return
        if (fast == NULL or fast->next == NULL) {
            cout << "No Loop\n" ;
            return ;
        }
    } while (fast != slow) ;

    // now slow and fast are at same node.
    // move fast to the first node. Move fast as well as slow by one step each time
    // until their next is not same

    fast = n ;
    while (fast->next != slow->next) {
        fast = fast->next; 
        slow = slow->next ;
    }

    // when next of slow = next of fast. slow is at last node. Make next of slow = null
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
    recursive_reverse(head, NULL) ;
    printList(head) ;

    deleteNode(head, 5) ;
    printList(head) ;

}