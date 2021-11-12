#include<iostream>
#include<cctype>
using namespace std;

int main(){
    char ch;
    Start:
    cout<<endl<<"Enter an Alphabet :";
    cin>>ch;
    ch = toupper(ch);
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
        cout<<"Uppercase of it:"<<ch;
    }
    else{
        cout<<"Not An Alphabet!!";
        goto Start;
    }
return 0;
}