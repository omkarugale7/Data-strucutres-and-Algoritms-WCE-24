#include<bits/stdc++.h>
using namespace std ;

/**
 * Select the smallest element in array (from 0 to n-1) and swap it with first element
 * 
 * Repeat the same for arr from 1 to n-1... then 2 to n-1.. and so on
 * 
 */

void selection_sort(vector<int> &arr)
{
    int n = arr.size() ;
    for (int i = 0 ; i < n ; i++)
    {
        int smallest_element_ind = i ;
        for (int j = i+1 ; j < n ; j++)
        {
            if (arr[j] < arr[smallest_element_ind]) smallest_element_ind = j ;
        }
        swap(arr[smallest_element_ind], arr[i]) ;
    }
}

int main()
{
   vector<int> arr{10, 1, 2, 3, 50, 5, 10, 100} ;
   selection_sort(arr) ;
   for (auto x : arr) cout << x << " " ;
}