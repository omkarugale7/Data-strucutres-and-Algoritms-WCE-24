#include<bits/stdc++.h>
using namespace std ;

void subSequences(string input, string output, int i)
{
    // if we checked each char in input print output
    if (i == input.size()) {
        cout << output << "\n" ;
        return ;
    }

     // take input[i] in our ans and recursively call for next place
    subSequences(input, output + input[i], i+1) ;

    // dont take input[i] in our ans and recursively call for next place
    subSequences(input, output, i+1) ;
}

int main()
{
    string s = "abc" ;
    subSequences(s, "", 0) ;
}