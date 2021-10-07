     /**
	 * From the given array arr print one pair of elements such that their sum = target
	 * if no such pair exists return 0, 0
	 */


#include<bits/stdc++.h>
using namespace std ;

vector<int> pairSum(vector<int> arr, int target)
{
    vector<int> ans ;
    unordered_set<int> set ;

    int n = arr.size() ;

    for (int i = 0 ; i < n; i++)
    {
        // for each arr[i] we search for x = target-arr[i] in set. If present we got the answer
        int x = target - arr[i] ;
        if (set.find(x) != set.end())
        {
            ans.push_back(arr[i]) ;
            ans.push_back(x) ;
            return ans ;
        }

        // if x is not present in set. we add current element arr[i] in set and check for next element in arr
        set.insert(arr[i]) ;
    }

    ans.push_back(0) ;
    ans.push_back(0) ;

    return ans ;

}


int main()
{
    vector<int> arr{10, 5, 2, 3, -6, 9, 11} ;
    int target = 8 ;
    vector<int> ans = pairSum(arr, target) ;
    for (auto x : ans) cout << x << " " ;
}