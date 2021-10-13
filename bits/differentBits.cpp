#include<bits/stdc++.h>
using namespace std ;

// Given to integers a and b. find how many number of bits should be changed to make a and b equal


int noOfDifferentBits(int a, int b)
{
    int x = a^b ;

    // in x only that bits are set. Which are different in and b

    int ans = 0 ;

    // x = x&(x-1) clears the rightmost setBit in x. So using this property we can count number of setBits in x
    while (x != 0)
    {
        ans++ ;
        x = x&(x-1) ;
    }

    return ans ;

}

int main()
{
     int a = 4 , b = 3 ;
     cout << noOfDifferentBits(a, b) ;
}