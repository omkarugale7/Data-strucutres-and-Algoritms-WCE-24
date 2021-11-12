#include<bits/stdc++.h>
using namespace std ;



class MyStack
{
    int size ;
    int top ;
    int * arr ;

 public:
    MyStack(int size)
    {
         this->size = size;
         arr = new int[size] ;
         top = -1 ;
    }

    void push(int a)
    {
        if (top == size - 1) {
            cout << "Stack overflow\n" ; 
            return;
        }

        top++ ;

        arr[top] = a ;
    }

    int pop()
    {
        if (top == -1) {
            cout << "Stack uncderflow\n" ;
            return -1;
        }
        int to_pop = arr[top] ;
        top-- ;
        return to_pop ;
    }

    int peek()
    {
        if (top == -1) {
            return -1 ;
        }

        return arr[top] ;
    }

    bool isEmpty()
    {
        return top == -1 ;
    }

    bool isFull()
    {
        return top == size - 1 ;
    }

    int getSize()
    {
        return size ;
    }

} ;


int main()
{
   MyStack s(5) ;
   s.push(1) ;
   s.push(2) ;
   s.push(3) ;
   s.push(4) ;
   s.push(5) ;
   s.push(6); 
   cout << s.getSize() << "\n" ;
   cout << s.isEmpty() << "\n" ;
   cout << s.isFull() << "\n" ;
   cout << s.pop() << "\n" ;
   cout << s.peek() ;
}