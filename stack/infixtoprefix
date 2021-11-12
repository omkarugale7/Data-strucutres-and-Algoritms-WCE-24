#include<iostream>
#include<stack>
#include<cmath>
using namespace std;
int prec(char c)
{
	if(c=='^')
		return 3;
	if(c=='*'||c=='/')
		return 2;
	if(c=='+'|| c=='-')
		return 1;
	return -1;
}
string infixtoprefix(string s)
{
	stack<char> st;
	string ans = "";
	for(int i=s.size()-1;i>=0;i--)
	{
		
		if((s[i]>='a'&&s[i]<='z') || (s[i]>='A'&&s[i]<='Z'))
			ans = ans + s[i];
		else if(s[i]==')')
			st.push(s[i]);
		else if(s[i]=='(')
		{
			while(!st.empty() && st.top()!=')')
			{
				ans = ans + st.top();
				st.pop();
			}
			if(!st.empty())
			st.pop();
		}
		else
		{
			while(!st.empty() && prec(st.top())>prec(s[i]))
			{
				ans = ans + st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while(!st.empty())
	{
		ans = ans + st.top();
		st.pop();
	}
	return ans;
}
int main()
{
	string s;
	cin>>s;
	cout<<infixtoprefix(s)<<endl;
	return 0;
}
