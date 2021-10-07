#include<bits/stdc++.h>
using namespace std ;

int maxProfit(vector<int> prices)
{
    int n = prices.size() ;
    int profit = 0 ;
    for  (int i = 1 ; i < n ; i++)
    {
        if (prices[i] > prices[i-1]) profit += prices[i] - prices[i-1] ;
    }

    return profit ;
}

int main()
{
    vector<int> prices{10, 5, 20, 30, 7, 25, 10, 35} ;
    cout << maxProfit(prices) ;
}