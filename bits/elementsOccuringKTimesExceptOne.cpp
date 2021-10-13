#include<bits/stdc++.h>
using namespace std ;

// Given an array where each element occurs k times in that array except one element which occurs only once
// find that unique element

int main()
{

  vector<long> arr {1, 2, 1, 2, 2, 4, 5, 6, 4, 5, 6, 1 , 3 , 4 , 5 , 6, 1, 2, 4 , 5, 6} ;
  long n = arr.size() ;
  long k = 4 ;

  long bitsArr [64] = {0} ;

        /**
		 * bitsArr tells how many numbers have setBit at given position
		 * For num occurring only once, if it has setBit at some position,
		 * bitsArr[at that position] % k = 1
		 */
    
    for (long i = 0 ; i < n ; i++)
    {
        long curr = arr[i], pos = 0 ;

        // increament in bitsArr at all pos where arr[i] has setBit
        while (curr != 0)
        {
              if ((curr&1) != 0)  bitsArr[pos]++ ;

              pos++ ;
              curr >>= 1 ;
        }
    }

    long ans = 0 ;

    for (long i = 0 ; i < 64 ; i++)
    {
        if (bitsArr[i]%k != 0) {
            // set bit in ans at pos where bitsArr[i]%k != 0
            ans = (ans | (1 << i)) ;
        }
    }

    cout << ans << "\n" ;






}