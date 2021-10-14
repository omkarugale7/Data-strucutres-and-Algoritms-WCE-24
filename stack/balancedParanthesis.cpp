#include<bits/stdc++.h>
using namespace std ;


bool isParanthesisBalanced(string s)
{
    stack<char> mStack ;

   int n = s.length() ;

    for (int i = 0; i < n ; i++)
    {

        char ch = s[i] ;

        if (ch == '(' or ch == '[' or ch == '{') mStack.push(ch) ;

        else if (ch == ')') {
             if (mStack.empty()) return false ;
            if (mStack.top() == '(') mStack.pop() ;
            else return false ;
        }

        else if (ch == ']') {
             if (mStack.empty()) return false ;
            if (mStack.top() == '[') mStack.pop() ;
            else return false ;
        }

        else if (ch == '}') {
            if (mStack.empty()) return false ;
            if (mStack.top() == '{') mStack.pop() ;
            else return false ;
        }

    }


    return mStack.empty() ;

}

int main()
{
 string s = "(a+b)*[c*(a+b)]" ;
 cout << isParanthesisBalanced(s) ;
}