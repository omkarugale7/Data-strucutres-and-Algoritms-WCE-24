#include<bits/stdc++.h>
using namespace std ;

int findBit(long n, long pos)
{
    if ((n & (1 << pos)) ==0) return 0 ;
    return 1 ;
}

int main()
{

    vector<long> arr {1, 2, 1, 3, 3, 4, 5, 6, 5,  6} ;
    int n = arr.size() ;

    long ans = 0 ;
		
		for (int i = 0 ; i < n ; i++)
			 ans ^= arr[i] ;
		
		// Now ans = xor of two numbers occurring once
		
		/**
		 * Find the first position where these two nums have different bits
		 * Again loop through arr and take xor of nums where bits at this pos = 1
		 * So the num(one of the ans) having bit at that pos equal to 1 also gets cancelled
		 * we have one answer now.
		 */
		
		long pos = 0 ;
		while (findBit(ans, pos) == 0) pos++ ;
		
		long temp = ans ;
		for (int i = 0 ; i < n ; i++)
		    if (findBit(arr[i], pos) == 1) temp ^= arr[i] ;
		
		// temp is one number and other number is ans ^ temp
		
		cout << temp << " " << (ans^temp) << endl;
}