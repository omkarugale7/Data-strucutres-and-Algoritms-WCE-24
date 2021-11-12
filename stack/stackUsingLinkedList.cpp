#include<bits/stdc++.h>
using namespace std ;

class Node{
  public :
    int data ;
    Node * next ;

    Node(int data, Node * next)
    {
        this->data = data;
        this->next = next ;
    }
} ;


class MyStack{
  
  Node * top; 

  public:
   MyStack()
   {
       top = NULL ;
   }

   void push(int val)
   {
       Node * n = new Node(val, top) ;
       top = n ;
   }

   int pop()
   {
       if (top == NULL) {
           cout << "Stack underflow\n" ;
           return -1 ;
       }

       int to_pop = top->data;

       top = top->next ;

       return to_pop ;

   }

   int peek()
   {
       if (top == NULL) {
           cout << "Stack underflow\n" ;
           return -1 ;
       }

       return top->data ;
       
   }

   int isEmpty()
   {
       return top == NULL ;
   }


} ;



int main()
{
    MyStack s ;
    cout << s.isEmpty() << "\n" ;
   s.push(1) ;
   s.push(2) ;
   s.push(3) ;
   s.push(4) ;
   s.push(5) ;
   s.push(6); 
   cout << s.isEmpty() << "\n" ;
   cout << s.pop() << "\n" ;
   cout << s.peek() ;

}