#include<bits/stdc++.h>
using namespace std ;

int fib(int n)
{
    // invalid case
    if (n < 0) return -1 ;

    // base case
    if (n == 0 or n == 1) return n ;

    // recursive call
    return fib(n-1) + fib(n-2) ;
}

int main()
{
   int n = 5 ;
   cout << fib(10) ;
}