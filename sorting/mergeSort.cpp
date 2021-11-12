#include<bits/stdc++.h>
using namespace std ;

/**
 * 
 *  It is a divide and conquer algorithm.  (dividing is logical not physical)
 *  
 *  A single element array is always sorted.
 * 
 *  Keep dividing the arrays until we get single element arrays. Then start merging them back in sorted order 
 * 
 */


// This is function to merge two sorted arrays.
void merge(vector<int> &a, int s, int mid, int e)
{
    vector<int> temp ;
    int i = s , j = mid + 1 ;
    while (i <= mid and j <= e)
    {
      if (a[i] < a[j]) temp.push_back(a[i++]) ;
      else temp.push_back(a[j++]) ;
    }

    while (i <= mid) temp.push_back(a[i++]) ;
    while (j <= e) temp.push_back(a[j++]) ;

    for (i = 0 ; i < temp.size() ; i++) a[i+s] = temp[i] ;

}

void merge_sort(vector<int> &a, int s, int e)
{
    if (s >= e) return ;

    int mid = (s+e)/2 ;

    merge_sort(a, s, mid) ;
    merge_sort(a, mid+1, e) ;

    merge(a, s, mid, e) ;
}


int main()
{
    vector<int> arr{12, 10, 5, 1, 2, 3, 4, 20, 15, 18, 12} ;
    merge_sort(arr, 0 , arr.size()) ;
    for (auto x : arr) cout << x << " " ;

}