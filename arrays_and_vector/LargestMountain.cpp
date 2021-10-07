#include<bits/stdc++.h>
using namespace std ;

// An array is given. A mountain means first the elements increase and then decrease. 
<<<<<<< HEAD
// we have to find length of the longest mountain from given array
=======
// find the length of longest mountain
>>>>>>> 11bdc320a76a2c69509f96ae42c2e8f9f6334707

int longest_mountain(vector<int> arr)
{
   int n = arr.size() ;
   int i = 0 , j = 0, max_len = 0 ;

  // first go at the minima and put a pointer there
   while (j < n-1 && arr[j] > arr[j+1])
		      j++ ;
	i = j ;

    
    while (j < n-1)
		{
            // move until we get a peak
			while (j < n-1 && arr[j] < arr[j+1]) j++ ;
			
			if (j == n-1) break ;
			
            // Now move until we get a minima again
			while (j < n-1 && arr[j] > arr[j+1]) j++ ;
			
            // i to j is a mountain. Check its length and compare maxLenTillNow
			if (j - i + 1 > max_len) max_len = j - i +1 ;
			
			i = j ;
		}
      return max_len ;
}


int main()
{
    vector<int> arr {5, 6, 1, 2, 3, 4, 5, 4, 3, 2, 0, 1, 2, 3, -2, 4} ;
    cout << longest_mountain(arr) ;
  


}
