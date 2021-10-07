#include<bits/stdc++.h>
using namespace std ;


// find the max length of subsequence such that all the elements in subsequence are consecutive
// 1,5,2,3,4 forms a consecutive elements band
// 1,2,3,10 does not form

int longest_subsequence(vector<int> arr)
	{
		
		unordered_set<int> set ;

		int n = arr.size(), ans = 0;

        // add all elements to a unordered_set
		for (int i = 0; i < n ; i++) set.insert(arr[i]) ;
		
		for (int i = 0 ; i < n ; i++)
		{
            // check if arr[i] can be start of a band(consecutive numbers)
			if (set.find(arr[i] - 1) == set.end()) 
			{
				int curr = arr[i] ;
				
                // if arr[i] is start of band find its lenght
				while (set.find(curr) != set.end()) 
					curr++ ;
				
                // if it is greater than maxTillNow update max
				ans = max(curr - arr[i], ans) ;	
			}
		}
			
		return ans ;
	}
    // Time complexity = O(n)
    // Space complexity = O(n)

    int main()
    {
        vector<int> arr{ 1, 9, 3, 10, 4, 20, 2 };
        cout << longest_subsequence(arr) ;
    }