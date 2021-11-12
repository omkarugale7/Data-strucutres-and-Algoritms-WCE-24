#include<bits/stdc++.h>
using namespace std ;


// Array is sorted. Find mid element if it is equal to key return mid
// else if key is smaller than mid element then key if present is present in left part
// if key is greater than mid then key if present is present in right part
int binary_search(vector<int> arr, int key)
{
    int s = 0 , e = arr.size() - 1 ;
    while (s <= e)
    {
        int mid = (s+e)/2 ;
        if (arr[mid] == key) return mid ;

        if (arr[mid] < key) s = mid + 1 ;
        else e = mid - 1 ;
    }
    return -1 ;
}

int main()
{
   vector<int> arr{1, 5, 10, 12, 13, 15, 18} ;
   cout << binary_search(arr, 18) ;
}