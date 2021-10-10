#include<bits/stdc++.h>
using namespace std ;

    /**
	 * Given two arrays. Select two elements, one from each array such that
	 * absolute difference is minimum
	 */

void minPair(vector<int> a, vector<int> b)
{
    // sort second array
   sort(b.begin(), b.end()) ;

   int p1, p2 , diff = INT_MAX ;

   // loop through first array. Find lower_bound for that element in second array  (lower_bound = pos of nearest element in sorted arr such that 
   // element at pos is greater than or equal to given key )
   for (int x : a)
   {
       int lb = lower_bound(b.begin(), b.end(), x) - b.begin() ;
        
      // check diff between key and upper bound and update ans accordingly
       if (lb >= 1 and x-b[lb-1] < diff) {
           diff = x-b[lb-1] ;
           p1  = x ;
           p2 = b[lb-1] ;
       } 

        // now check diff between key and lower bound and update ans accordingly
        if (lb != b.size() and b[lb]-x < diff)
        {
            diff = b[lb] - x ;
            p1 = b[lb] ;
            p2 = x ;
        }


   }

   cout << "MINPAIR : " << p1 << " and " << p2 ;


}

int main()
{
       vector<int> a{-1, 5, 10, 20, 3} ;
       vector<int> b{26, 134, 135, 15, 17} ;
       minPair(a, b) ;
}