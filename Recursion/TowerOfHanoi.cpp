#include<bits/stdc++.h>
using namespace std ;

/**
 * Three towers are given. And source tower has n disks in it such that smaller disk is always above larger one
 * 
 * We have to transfer these disks in destination tower. We can use helper tower for this.
 *     -- We can not place larger above smaller one at any point.
 *     -- We can only transfer one disk from one tower to other at a time
 */

void toh(int n, int source, int helper, int destination)
{
    if (n > 0)
    {
        // Transfer n-1 disks from source to helper tower(2nd) by using recursion
        toh(n-1, source, destination, helper) ;

        // now transfer the largest disk from source to destination
        cout << source << " --> " << destination << "\n" ;

        // Transfer n-1 from helper to destination tower(2nd) by using recursion
        toh(n-1, helper, source, destination) ;
    }
}

int main()
{
   int no_of_disks = 3 ;
   int source = 1 ;
   int helper = 2 ;
   int destination = 3 ;
   toh(no_of_disks, source, helper, destination) ;
}