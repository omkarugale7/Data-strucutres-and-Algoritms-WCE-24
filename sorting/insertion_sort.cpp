#include<bits/stdc++.h>
using namespace std ;



// A single element array is always sorted. First element is a sorted array.
// for i in 1 to n-1 : place the element at arr[i] in sorted part of array

void insertion_sort(vector<int> &arr)
{
    int n = arr.size() ;
    for (int first_unsorted_pos = 1 ; first_unsorted_pos < n ; first_unsorted_pos++)
    {
        int i = first_unsorted_pos ;
            int temp = arr[i] ;
            while (i > 0 && arr[i-1] > temp)
            {
                arr[i] = arr[i-1] ;
                i-- ;
            }
            arr[i] = temp ;
    }
}

int main()
{
   vector<int> arr{1, 10, 2, 3, 5, 4, 50, 100, 25, 60} ;
   insertion_sort(arr) ;
   for (auto x : arr) cout << x <<  " " ;
}