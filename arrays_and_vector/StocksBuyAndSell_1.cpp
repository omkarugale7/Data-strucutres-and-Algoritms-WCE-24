#include<bits/stdc++.h>
using namespace std ;

    /**
	 * Given prices of stock on different days. Find maximum profit one can make if stock can be
	 * bought and sold once
	 */

int maxProfit(vector<int> prices)
{
    int n = prices.size() ;
    int min_till_now = prices[0], max_profit = 0 ;

    // for each day, check if profit is maximum if stock was bought on some previous day having minimum price till now
    // if this profit is more, update max_profit
    for (int i = 1 ; i < n ; i++)
    {
        if (prices[i] - min_till_now > max_profit) max_profit = prices[i] - min_till_now;

        // if we get lower price we update the min_till_now so that for next days, we can check profit from this
        if (prices[i] < min_till_now) min_till_now = prices[i] ;
    }

    return max_profit ;

}

int main()
{
    vector<int> prices{10, 5, 20, 30, 7, 25, 10, 15} ;
    cout << maxProfit(prices) ;

}