#include<bits/stdc++.h>
using namespace std ;

float square_root(int n, int p)
{
    int s = 0, e = n ;
    float ans = 0.0f ;

    while (s <= e)
    {
        int mid = (s+e)/2 ;
        if (mid*mid == n) return mid ;

        if (mid*mid < n) {
           ans = mid ;
           s =  mid + 1 ;
        }
        else e = mid - 1 ;
    }

    float f_ans = 0.1f ;

    for (int i = 0 ; i < p ; i++)
    {
        while (ans*ans < n) ans += f_ans ;

        ans -= f_ans ;

        f_ans /= 10 ;
    }
    
    return ans ;

}

int main()
{
  
  cout << square_root(10, 3) ;

}
















