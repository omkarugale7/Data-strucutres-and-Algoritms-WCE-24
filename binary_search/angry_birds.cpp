#include<bits/stdc++.h>
using namespace std ;

    /**
	 *  There's a long wire. An array is given denoting positions of nests on this wire
	 *  
	 *  Also an integer b denoting number of birds is given. We have to place the birds 
	 *  such that distance between birds is as big as possible.
	 *  
	 *  After optimally placing the birds , find the smallest distance between any two birds
	 *  
	 */

bool canPlaceBirds(int b, int n , vector<int> nests, int sep)
{
    // place first bird at first nest
    int birds = 1 ;
    int location = nests[0] ;

    // loop through the nests and check how many birds can be placed such that dist between any two birds is greater than or equal to sep
    for (int i = 1 ; i < n ; i++)
    {
        int curr_location = nests[i] ;
        if (curr_location-location >= sep) {
            birds++ ;
            location = curr_location;
        }

        if (birds == b) return true ;
    }

    return false ;
}

int angryBirds(vector<int> nests, int b)
{
    int n = nests.size() ;
    
    // Minimum distance between any two birds can be zero and max = nests[n-1] - nests[0]
    int s = 0 , e = nests[n-1] - nests[0] , ans = - 1;

    // Perform binary search to find maximum possible minimum distance between birds
    while (s <= e)
    {
        int mid = (s+e)/2 ;

        // check if distance = mid is feasible or not i.e. can we place all the birds such min distance = mid
        bool canPlace = canPlaceBirds(b, n, nests, mid) ;

        // if we can place with distance = mid, store ans = mid and try to get larger value for min distance i.e. go to right part of array
        if (canPlace)
        {
            ans = mid ;
            s = mid+1 ;
        }
        // if we can not place all the birds such that min distance = mid, min distance must be reduced. i.e go to left part of the array
        else 
        {
            e = mid - 1 ;
        }
    }
    return ans ;
}


int main()
{
    vector<int> nests{1, 2, 4, 8, 9} ;
    int birds = 3 ;

    
    cout << angryBirds(nests, birds) ;
}
