#include<bits/stdc++.h>
using namespace std ;


// Find the longest substring from string s such that substring has no duplicate
	
string unique_substring(string s)
{
		
     unordered_map<char, int> m ;
		
      int i = 0 , j = 0 ;
      int window_len = 0, max_window_len = 0 , start_window = -1 ;
		
    while (j < s.length())
   {
	char c = s[j] ;
			
	// if c is already in map and its index >= start of window, contract window such that it will be removed
	if(m.count(c) > 0 && m[c] >= i)
	{
		i = m[c] + 1 ;
                window_len = j - i  ;
	}
			
	// now add c and its index to map
	 m[c] = j;
         window_len++ ;
         j++ ;

        // check if current window is longest or not
	if(window_len > max_window_len)
	{
               max_window_len = window_len; 
                start_window = i ;
         }
    }

   return s.substr(start_window, max_window_len) ;
}
	

int main()
{
   string s = "aabacb" ;
    cout << unique_substring(s) ;		
}
