#include<bits/stdc++.h>
using namespace std ;

// An array is given. A mountain means first the elements increase and then decrease. 
// length of mountain

int longest_mountain(vector<int> arr)
{
   int n = arr.size() ;
   int i = 0 , j = 0, max_len = 0 ;

   while (j < n-1 && arr[j] > arr[j+1])
		      j++ ;
	i = j ;

    while (j < n-1)
		{
			while (j < n-1 && arr[j] < arr[j+1]) j++ ;
			
			if (j == n-1) break ;
			
			while (j < n-1 && arr[j] > arr[j+1]) j++ ;
			
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