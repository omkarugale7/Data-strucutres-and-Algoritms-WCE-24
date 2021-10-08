#include<bits/stdc++.h>
using namespace std ;

/**
 *  take first element as pivot. Find the correct position of pivot in array. i.e. place all elements smaller than pivot to left and greater to right.
 * 
 *  Now recursively call the same function on the left part of the pivot and also call it now right part of the pivot.
 * 
 */

int partition(vector<int> &a, int s, int e)
{
    // Taking first element as pivot
    int pivot = a[s] ;
    int i = s+1, j = e ;

   do
   {
    // find the element greater than pivot by moving i to right which was initially pointing at s+1.
    while (i < e && a[i] < pivot) i++ ;
    //find the element smaller than pivot by j to left which initially pointing at last.
    while (j > s && a[j] > pivot) j-- ;
    
    // Now sawp them
    if (i < j)
        swap(a[i], a[j]) ;

    // reapeat this while i < j

   } while (i < j) ;
   
   // finally we found pos of pivot = j
   // so swap the pivot with element at j
   swap(a[s], a[j]) ;

   return j ;

}

void quickSort(vector<int> &a, int s, int e)
{
    if (s >= e) return ;

    int pivot_ind = partition(a, s, e) ;

    quickSort(a, s, pivot_ind-1) ;
    quickSort(a, pivot_ind+1, e) ;

}



int main()
{
    vector<int> arr{10,2,3,4,5,1,100,50,24} ;
    quickSort(arr, 0, arr.size()-1) ;

    for (int x : arr) cout << x << " " ;

}