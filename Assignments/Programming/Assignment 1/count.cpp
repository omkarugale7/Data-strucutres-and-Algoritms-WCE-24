// 5.	Write a C++ Program to Find Frequency (count) of vowels and consonants (character wise) in below String.
// “CPP is easy and great and Python is also great”

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s = "CPP is easy and great and Python is also great";
	int vowel =0 , cons = 0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==' ')
			continue;
		else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
			vowel++;
		else
			cons++;
	}
	cout<<"No of vowels : "<<vowel<<endl;
	cout<<"No of consonants : "<<cons<<endl;
	
	return 0;
}