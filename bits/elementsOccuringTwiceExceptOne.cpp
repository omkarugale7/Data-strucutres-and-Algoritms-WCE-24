#include<bits/stdc++.h>
using namespace std ;

    /**
	 * Given an array where each element occurs twice except one element
	 * find the element occurring only once
	 */

int main()
{
    vector<int> arr {1, 2, 1, 3, 3, 4, 5, 6, 4, 5, 6} ;
    int n = arr.size() ;
    int ans = 0 ;
		
		/**
		 * a ^ a = 0 , a ^ 0 = a
		 * each element which occurs twice gets cancelled by taking xor
		 * so element occurring only once remain in ans
		 * 
		 * Eg. : ans = 0 ==> ans ^ 1 = 0^1 = 1 ==> ans ^ 2 = 1^2 ==> ans ^ 1 = 1^2^1 = 2 ==> .....
		 */

		for (int i = 0 ; i < n ; i++)
		 ans ^= arr[i] ;


    cout << ans << "\n" ;



}