#include<bits/stdc++.h>
using namespace std ;

    /**
	 * Given prices of stock on different days. Find maximum profit one can make if stock can be
	 * bought and sold multiple times but at a time you can have only one stock i.e. 
	 * after buy order there should be sell order not buy order again
	 */

int maxProfit(vector<int> prices)
{
    int n = prices.size() ;
    int profit = 0 ;
    // we buy at each local minima and sell at the local maxima to get max Profit
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