#include<bits/stdc++.h>
using namespace std ;


/**
 * 
 * Keep comparing elements at adjacent positions, if they are wrongly placed, swap
 * 
 * in one loop largest element will be at correct position
 * 
 * perform this loop n-1 times so that all elements are sorted
 * 
 */

void bubble_sort(vector<int> &arr)
{
    int n = arr.size() ;
    for (int last_unsorted_pos = n-1 ; last_unsorted_pos > 0 ; last_unsorted_pos--)
    {
        for (int i = 0 ; i < last_unsorted_pos ; i++)
        {
            if (arr[i] > arr[i+1]) swap(arr[i], arr[i+1]) ;
        }
    }
}

int main()
{
     vector<int> arr{10, 2, 1, 3, 4, 5, 60, 50} ;
     bubble_sort(arr) ;
     for (auto x : arr) cout << x << " " ;
}