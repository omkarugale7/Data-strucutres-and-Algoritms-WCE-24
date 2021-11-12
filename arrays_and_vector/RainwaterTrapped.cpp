    /**
	 * Given an array representing height of block at that position.
	 * Find how much water (one unit is equivalent to one block) is trapped.
	 */

#include<bits/stdc++.h>
using namespace std ;


int trappedWater(vector<int> heights)
{
    int i = 0, j = heights.size() - 1 , l_max = 0, r_max = 0;
    int water = 0 ;

    while (i <= j )
    {

        if (heights[i] < heights[j])
        {
            if (heights[i] > l_max) l_max = heights[i] ;
            else water += l_max - heights[i] ;
            i++ ;
        }
        else
        {
            if (heights[j] > r_max) r_max = heights[j] ;
            else water += r_max - heights[j] ;
            j-- ;
        }
    }
  return water ;
}

int main()
{ 
    vector<int> heights{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1} ;
    cout << trappedWater(heights) ;
}