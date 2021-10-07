#include<bits/stdc++.h>
using namespace std ;

int maxProfit(vector<int> prices)
{
    int n = prices.size() ;
    int min_till_now = prices[0], max_profit = 0 ;
    for (int i = 1 ; i < n ; i++)
    {
        if (prices[i] - min_till_now > max_profit) max_profit = prices[i] - min_till_now;

        if (prices[i] < min_till_now) min_till_now = prices[i] ;
    }

    return max_profit ;

}

int main()
{
    vector<int> prices{10, 5, 20, 30, 7, 25, 10, 15} ;
    cout << maxProfit(prices) ;

}