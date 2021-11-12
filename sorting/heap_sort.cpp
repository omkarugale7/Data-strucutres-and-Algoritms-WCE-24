#include<bits/stdc++.h>
using namespace std ;


void insert(vector<int> &arr, int i)
{

    // array before i - 1 pos has become a max heap. Now arr[i-1] has to be inserted in heap.
    
    // Process of inserting element in maxHeap :
    // 1) insert it last pos. 2) check the parent of that element(for the ith element parent = element at i/2)
    // if parent is smaller, swap them. .. Keep repeating step 2 until we get parent > children or we reach at root

    int temp = arr[i - 1] ;
    while (i > 1 && arr[i/2-1] < temp)
    {
        arr[i-1] = arr[i/2-1] ;
        i = i/2 ;
    }
    arr[i - 1] = temp ;
}

void delete_and_place_last(vector<int> &arr, int n)
{

    // Delete the root .So now size of heap decreases and one remaining place is there. We place the deleted element there.

    // Process of deleting from heap :
    // 1) Delete the root.  2) Insert the last element of heap at root.  3) if root is smaller than any one of the children. Swap the elements from parent and children
    // keep repeating step 2 until we get parent > children or we reach at last of the heap


    int temp = arr[0] ;
    int i = 1 , j = 2 ;

    arr[0] = arr[n-1] ;

    while (j < n)
    {
        if (arr[j] > arr[j-1]) j++ ;
        if (arr[i - 1] < arr[j-1]) swap(arr[i-1], arr[j-1]) ;
        else break ;

        i = j ;
        j = 2*i ;
    }

    arr[n-1] = temp ;
}

void heap_sort(vector<int> &arr)
{
    // Making the array a max heap
   for (int i = 1 ; i <= arr.size() ; i++) insert(arr, i) ;
  
   // each time Removing root element (max) and start placing them from last pos
   for (int i = arr.size() ; i>=1 ; i--) delete_and_place_last(arr, i) ;

}


int main()
{
   vector<int> arr{10,5,1,2,3,4,50,25,30,15} ;
   heap_sort(arr) ;
   for (auto x : arr) cout << x << " " ;
}