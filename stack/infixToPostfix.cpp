#include<bits/stdc++.h>
using namespace std ;

    /*
	     INFIX : operand operator operand        ex.  a + b * c
	     
	     POSTFIX : operand operand operator      ex. a b c * +
	 
	     PREFIX : operator operand operand       ex. + * b c a
	 
	 */

    bool isOperator(char c)
	{
		return (c== '+' || c == '-' || c == '*' || c == '/') ;
	}
	
	int precedence(char c)
	{
		if (c == '+' || c == '-') return 1 ;
		if (c == '*' || c == '/') return 2 ;
		return 0 ;
	}

    string infixToPostfix(string s)
    {
		stack<char> mStack ;
        int n = s.length() ;
		string postfix = "" ;
		
		for (int i = 0 ; i < n ; i++)
		{
			char c = s[i] ;
			
			if (isOperator(c))
			{
				
			  while (!mStack.empty() && precedence(mStack.top()) >= precedence(c)) 
			  {
				  postfix = postfix + mStack.top() ;
				  mStack.pop();
			  }
					  mStack.push(c) ;	
			} else postfix = postfix + c ;
		}
		
		while (!mStack.empty()) 
		{
			postfix = postfix + mStack.top();
			mStack.pop();
		}
		
		return postfix ;
	}

	int main()
	{
	
		string s = "12 + 14 * 15 + 4" ;
		cout << infixToPostfix(s) ;
	}
	