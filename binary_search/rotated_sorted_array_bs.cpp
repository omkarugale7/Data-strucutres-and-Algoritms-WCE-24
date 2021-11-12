#include<bits/stdc++.h>
using namespace std ;


// Given A sorted array. But it is rotated. 
// Perform binary search on this array

int rotated_bs(vector<int> arr, int key)
{
    int s = 0 , e = arr.size()-1 ;
    while (s <= e)
    {
        int mid = (s+e)/2 ;
        if (arr[mid] == key) return mid ;

        if (arr[s] < arr[mid])
        {
            if (arr[s] <= key and key < arr[mid]) e = mid - 1 ;
            else s = mid + 1 ;
        }
        else 
        {
            if (arr[e] >= key and key > arr[mid]) s = mid + 1 ;
            else e = mid - 1 ;
        }

    }

    return -1 ;
}


int main()
{
   vector<int> arr{4, 5, 6, 7, 0, 1, 2, 3} ;
   cout << rotated_bs(arr, 4) ;
}
