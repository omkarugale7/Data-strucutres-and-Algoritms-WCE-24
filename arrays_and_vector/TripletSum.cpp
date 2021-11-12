#include<bits/stdc++.h>
using namespace std ;

    /**
	 * From given array arr, find all the triplets such that their sum = target
	 */

vector<vector<int>> tripletSum(vector<int> arr, int target)
{
    int n = arr.size() ;
    sort(arr.begin(), arr.end()) ;


    vector<vector<int>> ans ;
    
    // for each element take right side of the array and perform two pointer algorithm
    for (int i = 0; i < n-2 ; i++)
    {
        int x = arr[i] ;
        int j = i+1 , k = n-1 ;
        
        while (j < k)
        {
            int curr_sum = x + arr[j] + arr[k] ;
            if (curr_sum == target) {
                  vector<int> z{x, arr[j], arr[k]} ;
                  ans.push_back((z)) ;
                  j++ ; k-- ;
            } else if (curr_sum < target) j++ ;
            else k-- ;
        }
    }


     return ans ;

}

int main()
{
        vector<int> arr{3, 4, 5, 1, 2, 15, 8, 9, 6, 7} ;
        int target = 18 ;
        vector<vector<int>> ans = tripletSum(arr, 18) ;
        for (auto it : ans) cout << it[0] << " " << it[1] << " " << it[2] << "\n" ;
}