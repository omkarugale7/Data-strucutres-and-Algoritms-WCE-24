#include<bits/stdc++.h>
using namespace std ;

// in the given number, make bit at given position , equal to 1
// and return number
long setBit(long n, int pos)
{
    return (n | (1 << pos)) ;
}

// make bit at given position equal to 0 and return number
long clearBit(long n, int pos)
{
    return (n & ~(1 << pos)) ;
}

// find what is the bit at given position for the number. (1 or 0)
int findBit(long n, long pos)
{
    if ((n & (1 << pos)) ==0) return 0 ;
    return 1 ;
}

int main()
{
   int a = 12 ;
   cout << clearBit(a, 2) ;
}