#include<bits/stdc++.h>
using namespace std ;

/**
Given two sorted arrays. Merge them such that entire array is also sorted
*/

vector<int> merge(vector<int> a, vector<int> b)
{
    vector<int> merged_list ;
    int n = a.size(), m = b.size() ;
    int i = 0 , j = 0 ;

    while (i < n && j < m)
    {

        if (a[i] < b[j]) merged_list.push_back(a[i++]) ;
        else merged_list.push_back(b[j++]) ;
    }

    while (i < n) merged_list.push_back(a[i++]) ;
    while (j < m) merged_list.push_back(b[j++]) ;


    return merged_list ;

}

int main()
{
    vector<int> a{1, 10, 20, 30, 40, 50} ;
    vector<int> b{2, 12, 14, 16, 35, 45, 55} ;

    vector<int> merged_list = merge(a, b) ;

    for (auto x : merged_list) cout << x << " " ;

}
