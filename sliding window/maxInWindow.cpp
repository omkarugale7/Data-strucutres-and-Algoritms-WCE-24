#include<bits/stdc++.h>
using namespace std ;


/**
	 *  An array is given. For each position in array find max element in subarray of
	 *  size k starting from that position.  
	 *  
	 *  Eg. :
	 *  
	 *  arr = 1 2 3 1 4 5 2 3 6 , k = 3
	 *  
	 *  ans = 3 3 4 5 5 5 6
     * 
     * Bruteforce : We can check all windows of size k. 
     *              But time complexity = O(n*k)
     * 
     *  We have to do this problem in time complexity = O(n)
	 *  
	 */

	vector<int> maxInWindow(vector<int> arr, int k)
	{
		
		deque<int> dq ;
		vector<int> ans ;
		int n = arr.size();
		
		// first do the process for first k elements
		for (int i = 0 ; i < k ; i++)
		{
			// if element added before is less than current element, it is of no use
			// we remove them
			while (!dq.empty() && arr[dq.back()] <= arr[i]) dq.pop_back();
			
			// we are storing the positions of the elements so that we can easily check
			// if element can be present in current window or we have to remove it
			dq.push_back(i) ;	
		}
		// first element in dq is max till now
		ans.push_back(arr[dq.front()]) ;
		
		
		// now do the process for remaining all the windows
		for (int i = k ; i < n ; i++)
		{
			// remove all the elements which are out of range for current window
			while (!dq.empty() && dq.front() <= i - k) dq.pop_front();
			
			// remove if any smaller elements than current element are present in dq 
			while (!dq.empty() && arr[dq.back()] <= arr[i]) dq.pop_back();
			
			// add current element in dq
			dq.push_back(i) ;
			
			// first element in dq is answer for current window
			ans.push_back(arr[dq.front()]) ;
		}
		
		return ans ;
	}
	
	
	
	int main() 
	{
	 vector<int> arr{1, 2, 3, 1, 4, 5, 2, 3, 3, 6};
	 int k = 4 ;
	 vector<int> ans = maxInWindow(arr, k) ;
	 
	 for (int x : ans) cout << x << " " ;
		
	}




















