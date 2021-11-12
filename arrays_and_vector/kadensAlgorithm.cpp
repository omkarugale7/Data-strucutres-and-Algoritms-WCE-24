#include<bits/stdc++.h>
using namespace std ;

// find the maximum possible sum of any subarray in given array
int kaden(int arr[], int n)
{
    int currSum = 0 , maxSum = INT_MIN;
		
		for (int i = 0; i < n ; i++)
		{
			currSum += arr[i] ;
            // if we get sum greater than maxSum we'll update maxSum
			if (maxSum < currSum) maxSum = currSum ;
			
            // we'll take currsum for next part of array only if it is positive else we'll  make cursum = 0
			if (currSum < 0) currSum = 0 ;
		}
		return maxSum ;
}

int main()
{
    int n = 8 ;
    int arr[] = {1,2,3,-4,5,-10,5,2} ;
		cout << kaden(arr, n) ;
}