#include<bits/stdc++.h>
using namespace std ;

string ans = "" ;
void perm(string s,bool flags[])
	{
		if (ans.size()==s.size()) {
			cout << ans << " " ;
		}
		
		/**
         * 
		 * 	For each position in ans , each character in string s should be added in ans
		 * 	after deciding char at current pos in ans, recursively call the fun for next pos for ans
		 * 	Once all recursive calls after current pos are completed. the char taken for current
		 * 	pos will again be available for other positions
         * 
		 */
		
		for (int i = 0 ; i < s.size() ; i++)
		{
			if (flags[i] == false)
			{
				flags[i] = true ;
				ans += s[i] ;
				perm(s, flags);
				ans.pop_back() ;
                flags[i] = false ;
			}
		}
			
	}

int main()
{
    string s = "abc" ;
    bool flags[s.size()] = {0};
    perm(s,flags) ;
}